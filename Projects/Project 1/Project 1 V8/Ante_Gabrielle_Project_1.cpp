/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Project_1.cpp
 * Author: Gabrielle
 *
 * Created on July 8, 2020, 3:02 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

/*
 * line 119 delete it at the final version
 * add instructions to the game
 * save game mode
 * fRemain function, brdFile function: fstream, ctime record
 */

struct InProp {
    bool mine;     // if the cell has a mine
    int value;         // what the cell value is; hint for adjacent cell
};

struct Cell {
    char symbol;    // to be outputted
    bool hidden;    // if the player can see cell
    bool flagged;   // if the player holds the cell
    InProp hint;    // if the cell has a mine or where it's located       
};

void init(Cell **board,int mines, int row, int col);
void dspBrd(Cell **board, int row, int col);
int **sweep (Cell **board, int row, int col);
void getMove(Cell ** board, int row, int col,int &rChoice, int &cChoice);
bool isValid (Cell **board, int row, int col, int rMax, int cMax);
void clear (Cell **board, int row, int col,int rMax, int cMax);
bool chkWin(Cell **board, int rMax, int cMax);
int fRemain(Cell **board, int row, int col, int mines);
bool gmeOver (Cell **board, int row, int col,int rMax, int cMax, int mines);
void destroy(Cell **ary,int row);
void brdFile(Cell **board, int row, int col);
bool fileOpn (ofstream &fVar, const char fName[]);

int main(int argc, char** argv) {
    int row =0, col = 0, mines = 0;
    int rChoice=0, cChoice =0;
    
    cout << "Input the row and column." << endl;
    cin >> row >> col;
    do {
        cout << "Input the number of mines." << endl;
        cin >> mines;
    } while (mines > row*col);
    
    Cell**space= new Cell*[row];
     for (int i = 0; i <row;i++){
      *(space+i) = new Cell [col];
    }
    
    init(space,mines, row, col);
    dspBrd(space, row, col);
    do {
    getMove(space, row, col,rChoice, cChoice);
    dspBrd(space, row, col);
    } while(!gmeOver(space,rChoice-1,cChoice -1, row, col, mines));
   
    destroy(space, row);
    return 0;
}

void init(Cell **board,int mines, int row, int col)
{   
    srand(time(0));
    int rnum = 0, cnum = 0;
    int min = 0;
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            board[i][j].symbol = '-';
            board[i][j].hidden = true;
            board[i][j].hint.mine = false;
            board[i][j].flagged = false;
            board[i][j].hint.value = 0;
        }
    }
    for (int i = 0; i < mines; i++)
     {
        do{
        rnum = rand() % row;
        cnum = rand() % col;
        }while(board[rnum][cnum].hint.mine == true);
        board[rnum][cnum].hint.mine = true;
        board[rnum][cnum].symbol = '%';
     }
    
    int **val = sweep(board, row, col);
    
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            board[i][j].hint.value =val[i][j];
        }
    }
}

void dspBrd(Cell **board, int row, int col)
{  
    cout << endl;
    cout << setw(4) << " ";
    for (int i = 0; i < col; i++)
    {
        cout << i+1 << " ";
    }
    cout << endl;
    for (int i = 0; i < row; i++) 
    {
        cout << setw(2) << i+1 << "| ";
        for (int j = 0; j < col; j++) 
        { 
            //board[i][j].hidden = false;
            if (board[i][j].flagged == true)
            {
                cout << "P ";
            }
            else if (board[i][j].hidden == true)
            {
                cout << "* ";
            }
            else if (board[i][j].hint.value == 0)
            {
                cout << board[i][j].symbol << " ";
            }
            else
            {
                cout << board[i][j].hint.value << " ";
            } 
        }
        cout << endl;
    }
    cout << endl;
}

int **sweep (Cell **board, int row, int col)
{
    int **mines = new int*[row];
     for (int i = 0; i <row;i++){
      *(mines+i) = new int [col];
    };
    
     for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            mines[i][j] = 0;
            if (board[i][j].hint.mine == false)
            {
                if (i-1 >=0 && j-1>=0)    // top left
                {
                    if (board[i-1][j-1].hint.mine == true)
                    {
                        mines[i][j]++;
                    }
                }
                if (i-1 >=0 && j>=0)    // top
                {
                    if (board[i-1][j].hint.mine == true)
                    {
                        mines[i][j]++;
                    }
                }
                if (i-1 >=0 && j+1<col)    // top right
                {
                    if (board[i-1][j+1].hint.mine == true)
                    {
                        mines[i][j]++;
                    }
                }
                if (i>=0 && j+1<col)    // right
                {
                    if (board[i][j+1].hint.mine == true)
                    {
                        mines[i][j]++;
                    }
                }
                if (i+1 < row && j+1< col)    // bottom right
                {
                    if (board[i+1][j+1].hint.mine == true)
                    {
                        mines[i][j]++;
                    }
                }
                if (i+1 <row && j>=0)    // bottom
                {
                    if (board[i+1][j].hint.mine == true)
                    {
                       mines[i][j]++;
                    }
                }
                if (i+1 <row && j-1>=0)    // bottom left
                {
                    if (board[i+1][j-1].hint.mine == true)
                    {
                        mines[i][j]++;
                    }
                }
                if (i>=0 && j-1>=0)    // left
                {
                    if (board[i][j-1].hint.mine == true)
                    {
                        mines[i][j]++;
                    }
                }
            }
        }
     }
 
    return mines;
}

void getMove(Cell ** board, int row, int col, int &rChoice, int &cChoice)
{
    char choice = ' ';
    do {
    cout << "Pick a cell [row x col]: " << endl;
    cin >> rChoice >> cChoice;
    }while (!isValid(board, rChoice-1, cChoice-1,row, col));
    
    if (board[rChoice-1][cChoice-1].flagged == true)
    {
        board[rChoice-1][cChoice-1].flagged = false;
    }    
    else
    {   
        do {
            cout << "Flag it? [Y/N]: ";
            cin >> choice;
        } while (toupper(choice) != 'Y' && toupper(choice) != 'N');
        if (toupper(choice) == 'Y')
        {
            board[rChoice-1][cChoice-1].flagged = true;
        }
        else 
        {
            board[rChoice-1][cChoice-1].hidden = false;
            if (board[rChoice-1][cChoice-1].symbol == '-' && board[rChoice-1][cChoice-1].hint.value ==0 )
            {
                clear(board,rChoice-1, cChoice-1, row, col);
            }
        }
    }
}

bool isValid (Cell **board, int row, int col, int rMax, int cMax)
{
    if (row <0 || row >=rMax)
    {
        return false;
    }
    else if (col <0 || col >=cMax)
    {
        return false;
    }   
    else if (board[row][col].hidden == false)
    {
        cout << "That cell is already open." << endl;
        return false;
    }
    else
    {
        return true;
    }
}

void clear (Cell **board, int row, int col,int rMax, int cMax)
{
    
    if (row-1 >=0 && col-1>=0 && board[row-1][col-1].hidden == true)    // top left
    {
        board[row-1][col-1].hidden = false;
        if(board[row-1][col-1].symbol == '-' && board[row-1][col-1].hint.value == 0)
        {  
            clear(board,row-1, col-1, rMax, cMax);
        }
    }
    if (row-1 >=0 && col>=0 && board[row-1][col].hidden == true)    // top
    {
        board[row-1][col].hidden = false;
        if (board[row-1][col].symbol == '-' && board[row-1][col].hint.value == 0)
        {
            clear(board,row-1, col, rMax, cMax);
        }
    }
    if (row-1 >=0 && col+1<cMax && board[row-1][col+1].hidden ==true)    // top right
    {
        board[row-1][col+1].hidden = false;
        if (board[row-1][col+1].symbol == '-' && board[row-1][col+1].hint.value == 0)
        {
            clear(board,row-1, col+1, rMax, cMax);
        }
    }
    if (row>=0 && col+1<cMax&& board[row][col+1].hidden ==true)    // right
    {
        board[row][col+1].hidden = false;
        if (board[row][col+1].symbol == '-' && board[row][col+1].hint.value == 0)
        {
            clear(board,row, col+1, rMax, cMax);
        }
    }
    if (row+1 < rMax && col+1< cMax && board[row+1][col+1].hidden ==true)    // bottom right
    {
        board[row+1][col+1].hidden = false;
        if (board[row+1][col+1].symbol == '-' && board[row+1][col+1].hint.value==0)
        {
            clear(board,row+1, col+1, rMax, cMax);
        }
    }
    if (row+1 <rMax && col>=0 && board[row+1][col].hidden == true)    // bottom
    {
        board[row+1][col].hidden = false;
        if (board[row+1][col].symbol == '-' && board[row+1][col].hint.value == 0)
        {  
           clear(board,row+1, col, rMax, cMax);
        }
    }
    if (row+1 <rMax && col-1>=0 &&  board[row+1][col-1].hidden == true)    // bottom left
    {
        board[row+1][col-1].hidden = false;
        if (board[row+1][col-1].symbol == '-' && board[row+1][col-1].hint.value == 0)
        {   
            clear(board,row+1, col-1, rMax, cMax);
        }
    }
    if (row>=0 && col-1>=0 && board[row][col-1].hidden ==true)    // left
    {
        board[row][col-1].hidden = false;
        if (board[row][col-1].symbol == '-' &&  board[row][col-1].hint.value == 0)
        {
            clear(board,row, col-1, rMax, cMax);
        }
    }
}

bool chkWin(Cell **board, int rMax, int cMax)
{
    int count = 0;
     for (int i = 0; i < rMax; i++) 
    {
        for (int j = 0; j < cMax; j++) 
        { 
          if (board[i][j].hint.mine == true && board[i][j].flagged==true)
          {
              count++;
          }
          else if (board[i][j].hint.mine == false &&board[i][j].hidden == false)
          {
              count++;
          }
        }
     }
    if (count == rMax*cMax)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int fRemain(Cell **board, int row, int col, int mines)
{
    int flags = 0, diff = 0; 
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            if (board[i][j].flagged == true)
            {
                flags++;
            }
        }
     }
    diff = mines - flags;
    return diff;
}

bool gmeOver (Cell **board, int row, int col,int rMax, int cMax, int mines)
{
    int diff = 0;
    if (board[row][col].hint.mine == true && board[row][col].hidden ==false)
    {
        for (int i = 0; i < rMax; i++) 
        {
            for (int j = 0; j < cMax; j++) 
            {
                board[i][j].hidden =false;
            }
        }
        dspBrd(board, rMax, cMax);
        cout << "Game Over!" << endl;
        return true;
    }
    else if (chkWin(board, rMax, cMax))
    {
        cout << "You won!" << endl;
        brdFile(board,rMax,cMax);
        return true;
    }
    else 
    {
        diff = fRemain(board, rMax, cMax, mines);
        cout << diff << " mines remaining." << endl;
        return false;
    }
}

void destroy(Cell **ary,int row)
{
      for (int i = 0; i <row;i++){
        delete[] *(ary+i);
      }
      delete[] ary;
}

void brdFile(Cell **board, int row, int col)
{  
    ofstream oData;
   // oData.open("WinningBoards.txt");
    if (fileOpn(oData, "WinningBoards.txt"))
    { 
        oData << setw(4) << " ";
        for (int i = 0; i < col; i++)
        {
            oData << i+1 << " ";
        }
        oData << endl;
        for (int i = 0; i < row; i++) 
        {
            oData << setw(2) << i+1 << "| ";
            for (int j = 0; j < col; j++) 
            { 
                //board[i][j].hidden = false;
                if (board[i][j].flagged == true)
                {
                    oData << "P ";
                }
                else if (board[i][j].hidden == true)
                {
                    oData << "* ";
                }
                else if (board[i][j].hint.value == 0)
                {
                    oData << board[i][j].symbol << " ";
                }
                else
                {
                    oData << board[i][j].hint.value << " ";
                } 
            }
            oData << endl;
        }
        // current date/time based on current system
        time_t winTime = time(0);

        // convert now to string form
        char* wTime = ctime(&winTime);

        oData << endl << "Game won on: " << wTime << endl <<endl;

        oData.close();
    }
    else
    {
        cout << "Error opening file." << endl;
    }
}

bool fileOpn(ofstream &fVar, const char fName[])
{
    fVar.open(fName);
    if (fVar.fail())
    {
        return false;
    }
    else 
    {
        return true;
    }
}