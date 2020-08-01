/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "GmeBrd.h"
#include "InBrd.h"
#include "OutBrd.h"
#include "Cell.h"
using namespace std;

int GmeBrd::row;
int GmeBrd::col;
int GmeBrd::mine;

void InBrd::celdata()
{
    c = new Cell*[row];
    for (int i = 0; i < row; i++) {
        *(c + i) = new Cell [col];
    }

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) {
            c[i][j].setnrow(i + 1);
            c[i][j].setncol(j + 1);
        }
    }
}

void InBrd::addMine()
{
    srand(time(0));
    int rnum=0, cnum=0;

    for (int i = 0; i < mine; i++) {
        do {
            rnum = rand() % row;
            cnum = rand() % col;
        } while (c[rnum][cnum].getMine() == true);
        c[rnum][cnum].setMine(true);
        c[rnum][cnum].setSym('%');
    }
}

void InBrd::addVal()
{
    int **val = sweep();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j].setVal(val[i][j]);
        }
    }
}

void InBrd::dspBrd()
{
    cout << endl;
    cout << setw(4) << " ";
    for (int i = 0; i < col; i++) {
        cout << i + 1 << " ";
    }
    cout << endl;
    for (int i = 0; i < row; i++) 
    {
        cout << setw(2) << i + 1 << "| ";
        for (int j = 0; j < col; j++) {
            if (c[i][j].getVal() == 0) {
                c[i][j].setDisp(c[i][j].getSym());
            } else {
                c[i][j].setDisp(c[i][j].getVal()+48);
            }
            cout << c[i][j].getDisp() << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int** InBrd::sweep()
{
    int **mines = new int*[row];
    for (int i = 0; i < row; i++) {
        *(mines + i) = new int [col];
    };

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            mines[i][j] = 0;
            if (c[i][j].getMine() == false) {
                if (i - 1 >= 0 && j - 1 >= 0) // top left
                {
                    if (c[i - 1][j - 1].getMine() == true) {
                        mines[i][j]++;
                    }
                }
                if (i - 1 >= 0 && j >= 0) // top
                {
                    if (c[i - 1][j].getMine() == true) {
                        mines[i][j]++;
                    }
                }
                if (i - 1 >= 0 && j + 1 < col) // top right
                {
                    if (c[i - 1][j + 1].getMine() == true) {
                        mines[i][j]++;
                    }
                }
                if (i >= 0 && j + 1 < col) // right
                {
                    if (c[i][j + 1].getMine() == true) {
                        mines[i][j]++;
                    }
                }
                if (i + 1 < row && j + 1 < col) // bottom right
                {
                    if (c[i + 1][j + 1].getMine() == true) {
                        mines[i][j]++;
                    }
                }
                if (i + 1 < row && j >= 0) // bottom
                {
                    if (c[i + 1][j].getMine() == true) {
                        mines[i][j]++;
                    }
                }
                if (i + 1 < row && j - 1 >= 0) // bottom left
                {
                    if (c[i + 1][j - 1].getMine() == true) {
                        mines[i][j]++;
                    }
                }
                if (i >= 0 && j - 1 >= 0) // left
                {
                    if (c[i][j - 1].getMine() == true) {
                        mines[i][j]++;
                    }
                }
            }
        }
    }
    return mines;       
}

InBrd::~InBrd()
    {
        for (int i = 0; i < row; i++) {
            delete[] *(c + i);}
        delete[] c;
    }