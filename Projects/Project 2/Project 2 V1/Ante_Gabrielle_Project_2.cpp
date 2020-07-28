/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 
/* 
 * File:   Ante_Gabrielle_Project_1.cpp
 * Author: Gabrielle
 *
 * Created on July 24, 2020, 3:33 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <cstring>
#include <fstream>
#include "Cell.h"

using namespace std;

/* 
 * Cell as a class
 * display board still in main
 * Display board work but mines are still not assigned
 * 
 * Concepts used so far: 
 * Constructor
 * Array of objects
 * Inline 
 */

void dspBrd(Cell **board, int row, int col);

int main(int argc, char** argv) {

    int row, col, mines;
    cout << "Input the row and column." << endl;
    cin >> row >> col;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "Input the row and column." << endl;
        cin >> row >> col;
    }
    do {
        cout << "Input the number of mines." << endl;
        cin >> mines;
    } while (mines > row * col);
    
    Cell**space = new Cell*[row];
    for (int i = 0; i < row; i++) {
        *(space + i) = new Cell [col];
    }

    dspBrd(space,row,col);
    
    
    return 0;

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
            if (board[i][j].getFlgd() == true) {
                board[i][j].setDisp('P');
            } else if (board[i][j].getHddn() == true) {
                board[i][j].setDisp('*') ;
            } else if (board[i][j].getVal() == 0) {
                board[i][j].setDisp(board[i][j].getSym());
            } else {
                board[i][j].setDisp(board[i][j].getVal()+48);
            }
            cout << board[i][j].getDisp() << " ";
        }
        cout << endl;
    }
    cout << endl;
}