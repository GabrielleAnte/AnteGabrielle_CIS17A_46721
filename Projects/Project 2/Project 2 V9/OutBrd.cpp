/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <iomanip>
#include "GmeBrd.h"
#include "OutBrd.h"
#include "InBrd.h" 
using namespace std;


void OutBrd::rdBrd(InBrd &a)
{   
    cell =a.c;
}

void OutBrd::dspBrd()
{
    cout << endl;
    cout << setw(4) << " ";
    for (int i = 0; i < col; i++) {
        cout << i + 1 << " ";
    }
    cout << endl;
    for (int i=0; i < row; i++){
        cout << setw(2) << i + 1 << "| ";
        for (int j = 0; j < col; j++) {
            if (cell[i][j].getFlgd() == true) {
                cell[i][j].setDisp('P');
            } else if (cell[i][j].getHddn() == true) {
                cell[i][j].setDisp('*') ;
            } else if (cell[i][j].getVal() == 0) {
                cell[i][j].setDisp(cell[i][j].getSym());
            } else {
                cell[i][j].setDisp(cell[i][j].getVal()+48);
            }
            cout << cell[i][j].getDisp() << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool OutBrd::loss(int r,int c)
{
    if (cell[r-1][c-1].getMine() == true && cell[r-1][c-1].getHddn() == false)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool OutBrd::chkClr(int r, int c)
{
    if (cell[r - 1][c - 1].getSym() == '-' && cell[r - 1][c - 1].getVal() == 0){
        return true;
    }
    else
    {
        return false;
    }
}

void OutBrd::clear(int r, int c) 
    {
        if (r - 1 >= 0 && c - 1 >= 0 && cell[r - 1][c - 1].getHddn() == true) // top left
        {
            cell[r - 1][c - 1].setHddn(false);
            if (cell[r - 1][c - 1].getSym() == '-' && cell[r - 1][c - 1].getVal() == 0) {
                clear(r - 1, c - 1);
            }
        }
        if (r - 1 >= 0 && c >= 0 && cell[r - 1][c].getHddn() == true) // top
        {
            cell[r - 1][c].setHddn(false);
            if (cell[r - 1][c].getSym() == '-' && cell[r - 1][c].getVal() == 0) {
                clear(r - 1, c);
            }
        }
        if (r - 1 >= 0 && c + 1 < col && cell[r - 1][c + 1].getHddn() == true) // top right
        {
            cell[r - 1][c + 1].setHddn(false);
            if (cell[r - 1][c + 1].getSym() == '-' && cell[r - 1][c + 1].getVal() == 0) {
                clear(r - 1, c + 1);
            }
        }
        if (r >= 0 && c + 1 < col && cell[r][c + 1].getHddn() == true) // right
        {
            cell[r][c + 1].setHddn(false);
            if (cell[r][c + 1].getSym() == '-' && cell[r][c + 1].getVal() == 0) {
                clear(r, c + 1);
            }
        }
        if (r + 1 < row && c + 1 < col && cell[r + 1][c + 1].getHddn() == true) // bottom right
        {
            cell[r + 1][c + 1].setHddn(false);
            if (cell[r + 1][c + 1].getSym() == '-' && cell[r + 1][c + 1].getVal() == 0) {
                clear(r + 1, c + 1);
            }
        }   
        if (r + 1 < row && c >= 0 && cell[r + 1][c].getHddn()== true) // bottom
        {
            cell[r + 1][c].setHddn(false);
            if (cell[r + 1][c].getSym() == '-' && cell[r + 1][c].getVal() == 0) {
                clear(r + 1, c);
            }
        }
        if (r + 1 < row && c - 1 >= 0 && cell[r + 1][c - 1].getHddn() == true) // bottom left
        {
            cell[r + 1][c - 1].setHddn(false);
            if (cell[r + 1][c - 1].getSym() == '-' && cell[r + 1][c - 1].getVal() == 0) {
                clear(r + 1, c - 1);
            }
        }
        if (r >= 0 && c - 1 >= 0 && cell[r][c - 1].getHddn() == true) // left
        {
            cell[r][c - 1].setHddn(false);
            if (cell[r][c - 1].getSym() == '-' && cell[r][c - 1].getVal() == 0) {
                clear(r, c - 1);
            }
        }
    }