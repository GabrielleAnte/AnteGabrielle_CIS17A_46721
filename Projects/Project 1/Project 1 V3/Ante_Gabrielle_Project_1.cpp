/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Project_1.cpp
 * Author: Gabrielle
 *
 * Created on July 7, 2020, 3:42 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * line 109 delete it at the final version
 * 
 * sweep function
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
void destroy(Cell **ary,int row);

int main(int argc, char** argv) {
    int row =0, col = 0, mines = 0;
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

/*bool isMine(Cell **board, int row, int col)
{
    if (board[row][col].mine == true)
    {
        return true;
    }
    else
    {
        false;
    }
}*/
void dspBrd(Cell **board, int row, int col)
{
    
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        { 
            board[i][j].hidden = false;
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
 
    //top left, top, top right
 
    return mines;
}

void destroy(Cell **ary,int row)
{
      for (int i = 0; i <row;i++){
        delete[] *(ary+i);
      }
      delete[] ary;
}

