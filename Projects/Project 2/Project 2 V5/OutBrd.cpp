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
            
void OutBrd::allHdn()
{
    for (int i=0; i < row; i++){
        for (int j = 0; j < col; j++) {
            //cell[i][j].setHddn(true);
        }
    }
}
