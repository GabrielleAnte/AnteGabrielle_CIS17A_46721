/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Project_1.cpp
 * Author: Gabrielle
 *
 * Created on July 13, 2020, 11:15 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

/*
 * mine function included, const string fName included
 * to be fixed/added: stats tracking, cin.fail
 * maybe read hints from a file
 * records 722
 */

struct InProp {
    bool mine; // if the cell has a mine
    int value; // what the cell value is; hint for adjacent cell
};

struct Cell {
    char display; // what is seen
    char symbol; // to be outputted
    bool hidden; // if the player can see cell
    bool flagged; // if the player holds the cell
    int nrow; // which row cell is located
    int ncol; // which col cell is located
    InProp hint; // if the cell has a mine or where it's located       
};

void init(Cell **board, int mines, int row, int col);
void dspBrd(Cell **board, int row, int col);
Cell data();
int **sweep(Cell **board, int row, int col);
void getMove(Cell ** board, int row, int col, int &rChoice, int &cChoice);
bool isValid(Cell **board, int row, int col, int rMax, int cMax);
void clear(Cell **board, int row, int col, int rMax, int cMax);
bool chkWin(Cell **board, int rMax, int cMax);
int fRemain(Cell **board, int row, int col, int mines);
bool gmeOver(Cell **board, int row, int col, int rMax, int cMax, int mines);
void destroy(Cell **ary, int row);
void brdFile(Cell **board, int row, int col);
bool fileOpn(ofstream &fVar, const char fName[]);
void save(Cell **board, int row, int col);
bool reRun();
void getRnC(int &rows, int &cols);
Cell **rdFile(int rows, int cols);
int mine(Cell **board, int row, int col);

int main(int argc, char** argv) {

    do {
        int row = 0, col = 0, mines = 0;
        int rChoice = 0, cChoice = 0;
        char choice = ' ';

        cout << "Minesweeper" << endl;
        cout << "1) Play a new game" << endl;
        cout << "2) Resume from last saved game" << endl;
        cin >> choice;

        switch (choice) {
            case '1':
            {
                // User input
                cout << "Input the row and column." << endl;
                cin >> row >> col;
                do {
                    cout << "Input the number of mines." << endl;
                    cin >> mines;
                } while (mines > row * col);

                Cell**space = new Cell*[row];
                for (int i = 0; i < row; i++) {
                    *(space + i) = new Cell [col];
                }

                //Initialize struct variables
                init(space, mines, row, col);

                //Display board
                dspBrd(space, row, col);
                do {
                    do {
                        cout << "Save? [Y/N]: ";
                        cin >> choice;
                    } while (toupper(choice) != 'Y' && toupper(choice) != 'N');

                    if (toupper(choice) == 'N') {
                        getMove(space, row, col, rChoice, cChoice);
                        dspBrd(space, row, col);
                    }
                } while (toupper(choice) == 'N'
                        && !gmeOver(space, rChoice - 1, cChoice - 1, row, col, mines));

                if (toupper(choice) == 'Y') {
                    save(space, row, col);
                }
                destroy(space, row);
                break;
            }
            case '2':
            {
                Cell**sgame;
                int rows = 0, cols = 0;
                getRnC(rows, cols);
                sgame = new Cell*[rows];
                for (int i = 0; i < rows; i++) {
                    *(sgame + i) = new Cell [cols];
                }

                sgame = rdFile(rows, cols);
                mines = mine(sgame, rows, cols);
                //Display board
                dspBrd(sgame, rows, cols);
                do {
                    do {
                        cout << "Save? [Y/N]: ";
                        cin >> choice;
                    } while (toupper(choice) != 'Y' && toupper(choice) != 'N');

                    if (toupper(choice) == 'N') {
                        getMove(sgame, rows, cols, rChoice, cChoice);
                        dspBrd(sgame, rows, cols);
                    }
                } while (toupper(choice) == 'N'
                        && !gmeOver(sgame, rChoice - 1, cChoice - 1, rows, cols, mines));

                if (toupper(choice) == 'Y') {
                    save(sgame, rows, cols);
                }
                destroy(sgame, rows);
                break;
            }
        }
    } while (reRun());

    return 0;

}

void init(Cell **board, int mines, int row, int col) {
    srand(time(0));
    int rnum = 0, cnum = 0;
    int min = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            board[i][j] = data();
            board[i][j].nrow = i + 1;
            board[i][j].ncol = j + 1;
        }
    }
    for (int i = 0; i < mines; i++) {
        do {
            rnum = rand() % row;
            cnum = rand() % col;
        } while (board[rnum][cnum].hint.mine == true);
        board[rnum][cnum].hint.mine = true;
        board[rnum][cnum].symbol = '%';
    }

    int **val = sweep(board, row, col);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            board[i][j].hint.value = val[i][j];
        }
    }
}

Cell data() {
    Cell c;

    c.display = '*';
    c.symbol = '-';
    c.hidden = true;
    c.hint.mine = false;
    c.flagged = false;
    c.hint.value = 0;

    return c;
}

void dspBrd(Cell **board, int row, int col) {
    cout << endl;
    cout << setw(4) << " ";
    for (int i = 0; i < col; i++) {
        cout << i + 1 << " ";
    }
    cout << endl;
    for (int i = 0; i < row; i++) {
        cout << setw(2) << i + 1 << "| ";
        for (int j = 0; j < col; j++) {
            if (board[i][j].flagged == true) {
                board[i][j].display = 'P';
            } else if (board[i][j].hidden == true) {
                board[i][j].display = '*';
            } else if (board[i][j].hint.value == 0) {
                board[i][j].display = board[i][j].symbol;
            } else {
                board[i][j].display = board[i][j].hint.value + 48;
            }
            cout << board[i][j].display << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int **sweep(Cell **board, int row, int col) {
    int **mines = new int*[row];
    for (int i = 0; i < row; i++) {
        *(mines + i) = new int [col];
    };

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            mines[i][j] = 0;
            if (board[i][j].hint.mine == false) {
                if (i - 1 >= 0 && j - 1 >= 0) // top left
                {
                    if (board[i - 1][j - 1].hint.mine == true) {
                        mines[i][j]++;
                    }
                }
                if (i - 1 >= 0 && j >= 0) // top
                {
                    if (board[i - 1][j].hint.mine == true) {
                        mines[i][j]++;
                    }
                }
                if (i - 1 >= 0 && j + 1 < col) // top right
                {
                    if (board[i - 1][j + 1].hint.mine == true) {
                        mines[i][j]++;
                    }
                }
                if (i >= 0 && j + 1 < col) // right
                {
                    if (board[i][j + 1].hint.mine == true) {
                        mines[i][j]++;
                    }
                }
                if (i + 1 < row && j + 1 < col) // bottom right
                {
                    if (board[i + 1][j + 1].hint.mine == true) {
                        mines[i][j]++;
                    }
                }
                if (i + 1 < row && j >= 0) // bottom
                {
                    if (board[i + 1][j].hint.mine == true) {
                        mines[i][j]++;
                    }
                }
                if (i + 1 < row && j - 1 >= 0) // bottom left
                {
                    if (board[i + 1][j - 1].hint.mine == true) {
                        mines[i][j]++;
                    }
                }
                if (i >= 0 && j - 1 >= 0) // left
                {
                    if (board[i][j - 1].hint.mine == true) {
                        mines[i][j]++;
                    }
                }
            }
        }
    }

    return mines;
}

void getMove(Cell ** board, int row, int col, int &rChoice, int &cChoice) {
    char choice = ' ';
    do {
        cout << "Pick a cell [row x col]: " << endl;
        cin >> rChoice >> cChoice;
    } while (!isValid(board, rChoice - 1, cChoice - 1, row, col));

    if (board[rChoice - 1][cChoice - 1].flagged == true) {
        board[rChoice - 1][cChoice - 1].flagged = false;
    }
    else {
        do {
            cout << "Flag it? [Y/N]: ";
            cin >> choice;
        } while (toupper(choice) != 'Y' && toupper(choice) != 'N');
        if (toupper(choice) == 'Y') {
            board[rChoice - 1][cChoice - 1].flagged = true;
        } else {
            board[rChoice - 1][cChoice - 1].hidden = false;
            if (board[rChoice - 1][cChoice - 1].symbol == '-' && board[rChoice - 1][cChoice - 1].hint.value == 0) {
                clear(board, rChoice - 1, cChoice - 1, row, col);
            }
        }
    }
}

bool isValid(Cell **board, int row, int col, int rMax, int cMax) {
    if (row < 0 || row >= rMax) {
        return false;
    } else if (col < 0 || col >= cMax) {
        return false;
    }
    else if (board[row][col].hidden == false) {
        cout << "That cell is already open." << endl;
        return false;
    } else {
        return true;
    }
}

void clear(Cell **board, int row, int col, int rMax, int cMax) {

    if (row - 1 >= 0 && col - 1 >= 0 && board[row - 1][col - 1].hidden == true) // top left
    {
        board[row - 1][col - 1].hidden = false;
        if (board[row - 1][col - 1].symbol == '-' && board[row - 1][col - 1].hint.value == 0) {
            clear(board, row - 1, col - 1, rMax, cMax);
        }
    }
    if (row - 1 >= 0 && col >= 0 && board[row - 1][col].hidden == true) // top
    {
        board[row - 1][col].hidden = false;
        if (board[row - 1][col].symbol == '-' && board[row - 1][col].hint.value == 0) {
            clear(board, row - 1, col, rMax, cMax);
        }
    }
    if (row - 1 >= 0 && col + 1 < cMax && board[row - 1][col + 1].hidden == true) // top right
    {
        board[row - 1][col + 1].hidden = false;
        if (board[row - 1][col + 1].symbol == '-' && board[row - 1][col + 1].hint.value == 0) {
            clear(board, row - 1, col + 1, rMax, cMax);
        }
    }
    if (row >= 0 && col + 1 < cMax && board[row][col + 1].hidden == true) // right
    {
        board[row][col + 1].hidden = false;
        if (board[row][col + 1].symbol == '-' && board[row][col + 1].hint.value == 0) {
            clear(board, row, col + 1, rMax, cMax);
        }
    }
    if (row + 1 < rMax && col + 1 < cMax && board[row + 1][col + 1].hidden == true) // bottom right
    {
        board[row + 1][col + 1].hidden = false;
        if (board[row + 1][col + 1].symbol == '-' && board[row + 1][col + 1].hint.value == 0) {
            clear(board, row + 1, col + 1, rMax, cMax);
        }
    }
    if (row + 1 < rMax && col >= 0 && board[row + 1][col].hidden == true) // bottom
    {
        board[row + 1][col].hidden = false;
        if (board[row + 1][col].symbol == '-' && board[row + 1][col].hint.value == 0) {
            clear(board, row + 1, col, rMax, cMax);
        }
    }
    if (row + 1 < rMax && col - 1 >= 0 && board[row + 1][col - 1].hidden == true) // bottom left
    {
        board[row + 1][col - 1].hidden = false;
        if (board[row + 1][col - 1].symbol == '-' && board[row + 1][col - 1].hint.value == 0) {
            clear(board, row + 1, col - 1, rMax, cMax);
        }
    }
    if (row >= 0 && col - 1 >= 0 && board[row][col - 1].hidden == true) // left
    {
        board[row][col - 1].hidden = false;
        if (board[row][col - 1].symbol == '-' && board[row][col - 1].hint.value == 0) {
            clear(board, row, col - 1, rMax, cMax);
        }
    }
}

bool chkWin(Cell **board, int rMax, int cMax) {
    int count = 0;
    for (int i = 0; i < rMax; i++) {
        for (int j = 0; j < cMax; j++) {
            if (board[i][j].hint.mine == true) {
                count++;
            } else if (board[i][j].hint.mine == false && board[i][j].hidden == false) {
                count++;
            }
        }
    }
    if (count == rMax * cMax) {
        return true;
    } else {
        return false;
    }
}

int fRemain(Cell **board, int row, int col, int mines) {
    int flags = 0, diff = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (board[i][j].flagged == true) {
                flags++;
            }
        }
    }
    diff = mines - flags;
    return diff;
}

bool gmeOver(Cell **board, int row, int col, int rMax, int cMax, int mines) {
    int diff = 0;
    if (board[row][col].hint.mine == true && board[row][col].hidden == false) {
        for (int i = 0; i < rMax; i++) {
            for (int j = 0; j < cMax; j++) {
                board[i][j].hidden = false;
            }
        }
        dspBrd(board, rMax, cMax);
        cout << "Game Over!" << endl;
        return true;
    } else if (chkWin(board, rMax, cMax)) {
        for (int i = 0; i < rMax; i++) {
            for (int j = 0; j < cMax; j++) {
                board[i][j].hidden = false;
            }
        }
        dspBrd(board, rMax, cMax);
        cout << "You won!" << endl;
        brdFile(board, rMax, cMax);
        return true;
    } else {
        diff = fRemain(board, rMax, cMax, mines);
        cout << diff << " mines remaining." << endl;
        return false;
    }
}

void destroy(Cell **ary, int row) {
    for (int i = 0; i < row; i++) {
        delete[] *(ary + i);
    }
    delete[] ary;
}

void brdFile(Cell **board, int row, int col) {
    ofstream oData;
    if (fileOpn(oData, "WinningBoards.txt")) {
        oData << setw(4) << " ";
        for (int i = 0; i < col; i++) {
            oData << i + 1 << " ";
        }
        oData << endl;
        for (int i = 0; i < row; i++) {
            oData << setw(2) << i + 1 << "| ";
            for (int j = 0; j < col; j++) {
                if (board[i][j].flagged == true) {
                    board[i][j].display = 'P';
                } else if (board[i][j].hidden == true) {
                    board[i][j].display = '*';
                } else if (board[i][j].hint.value == 0) {
                    board[i][j].display = board[i][j].symbol;
                } else {
                    board[i][j].display = board[i][j].hint.value + 48;
                }
                oData << board[i][j].display << " ";
            }
            oData << endl;
        }
        // current date/time based on current system
        time_t winTime = time(0);

        // convert now to string form
        char* wTime = ctime(&winTime);

        oData << endl << "Game won on: " << wTime << endl << endl;

        oData.close();
    } else {
        cout << "Error opening file." << endl;
    }
}

bool fileOpn(ofstream &fVar, const char fName[]) {
    fVar.open(fName, ios::app);
    if (fVar.fail()) {
        return false;
    } else {
        return true;
    }
}

void save(Cell **board, int row, int col) {
    ofstream progrss;
    progrss.open("Progress.bin", ios::binary);

    // for each struct/Cell
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            progrss.write(reinterpret_cast<char *> (&board[i][j].display), sizeof (board[i][j].display));
            progrss.write(reinterpret_cast<char *> (&board[i][j].symbol), sizeof (board[i][j].symbol));
            progrss.write(reinterpret_cast<char *> (&board[i][j].hidden), sizeof (board[i][j].hidden));
            progrss.write(reinterpret_cast<char *> (&board[i][j].flagged), sizeof (board[i][j].flagged));
            progrss.write(reinterpret_cast<char *> (&board[i][j].nrow), sizeof (board[i][j].nrow));
            progrss.write(reinterpret_cast<char *> (&board[i][j].ncol), sizeof (board[i][j].ncol));
            progrss.write(reinterpret_cast<char *> (&board[i][j].hint.mine), sizeof (board[i][j].hint.mine));
            progrss.write(reinterpret_cast<char *> (&board[i][j].hint.value), sizeof (board[i][j].hint.value));
        }
    }
    cout << "Game Saved" << endl << endl;
    progrss.close();
}

bool reRun() {
    char choice = ' ';
    do {
        cout << "Would you like to play again? [Y/N]" << endl;
        cin >> choice;
    } while (toupper(choice) != 'Y' && toupper(choice) != 'N');

    if (toupper(choice) == 'Y') {
        return true;
    } else {
        return false;
    }
}

void getRnC(int &rows, int &cols) {
    ifstream data;
    data.open("Progress.bin", ios::binary);

    //Declare and initialize variables
    Cell *a = new Cell; //Declare the array to return
    rows = 0;
    cols = 0;

    data.seekg(0, data.end);
    long length = data.tellg();
    data.seekg(0, data.beg);

    //Find # of rows and cols
    int size = sizeof (a->display) + sizeof (a->symbol) + sizeof (a->hidden) +
            sizeof (a->flagged) + sizeof (a->nrow) + sizeof (a->ncol) +
            sizeof (a->hint.mine) + sizeof (a->hint.value);

    for (int i = 0; i < length / size; i++) {
        data.read(reinterpret_cast<char *> (&a->display), sizeof (a->display));
        data.read(reinterpret_cast<char *> (&a->symbol), sizeof (a->symbol));
        data.read(reinterpret_cast<char *> (&a->hidden), sizeof (a->hidden));
        data.read(reinterpret_cast<char *> (&a->flagged), sizeof (a->flagged));
        data.read(reinterpret_cast<char *> (&a->nrow), sizeof (a->nrow));
        data.read(reinterpret_cast<char *> (&a->ncol), sizeof (a->ncol));
        data.read(reinterpret_cast<char *> (&a->hint.mine), sizeof (a->hint.mine));
        data.read(reinterpret_cast<char *> (&a->hint.value), sizeof (a->hint.value));
        if (a-> nrow > rows) {
            rows = a-> nrow;
        }
        if (a-> ncol > cols) {
            cols = a->ncol;
        }
    }

    delete a;

    data.close();
}

Cell **rdFile(int rows, int cols) {
    ifstream data;
    const string fName = "Progress.bin";
    data.open(fName, ios::binary);

    //Declare and initialize variables
    Cell **game;

    //go back to beginning of file
    data.clear();
    data.seekg(0, ios::beg);

    game = new Cell*[rows];
    for (int i = 0; i < rows; i++) {
        *(game + i) = new Cell [cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            data.read(reinterpret_cast<char *> (&game[i][j].display), sizeof (game[i][j].display));
            data.read(reinterpret_cast<char *> (&game[i][j].symbol), sizeof (game[i][j].symbol));
            data.read(reinterpret_cast<char *> (&game[i][j].hidden), sizeof (game[i][j].hidden));
            data.read(reinterpret_cast<char *> (&game[i][j].flagged), sizeof (game[i][j].flagged));
            data.read(reinterpret_cast<char *> (&game[i][j].nrow), sizeof (game[i][j].nrow));
            data.read(reinterpret_cast<char *> (&game[i][j].ncol), sizeof (game[i][j].ncol));
            data.read(reinterpret_cast<char *> (&game[i][j].hint.mine), sizeof (game[i][j].hint.mine));
            data.read(reinterpret_cast<char *> (&game[i][j].hint.value), sizeof (game[i][j].hint.value));
        }
    }

    data.close();
    return game;
}

int mine(Cell **board, int row, int col) {
    int nmines = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (board[i][j].hint.mine == true) {
                nmines++;
            }
        }
    }
    return nmines;
}
