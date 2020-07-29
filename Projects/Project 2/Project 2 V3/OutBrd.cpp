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


void OutBrd::dspBrd(InBrd &a)
{   
    cout << endl;
    cout << setw(4) << " ";
    for (int i = 0; i < col; i++) {
        cout << i + 1 << " ";
    }
    cout << endl;
    for (int i = 0; i < row; i++) {
        cout << setw(2) << i + 1 << "| ";
        for (int j = 0; j < col; j++) {
            if (a.c[i][j].getFlgd() == true) {
                a.c[i][j].setDisp('P');
            } else if (a.c[i][j].getHddn() == true) {
                a.c[i][j].setDisp('*') ;
            } else if (a.c[i][j].getVal() == 0) {
                a.c[i][j].setDisp(a.c[i][j].getSym());
            } else {
                a.c[i][j].setDisp(a.c[i][j].getVal()+48);
            }
            cout << a.c[i][j].getDisp() << " ";
        }
        cout << endl;
    }
    cout << endl;   
}
            

