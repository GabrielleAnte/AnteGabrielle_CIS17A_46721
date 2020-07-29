/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InBrd.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 3:19 AM
 */

#ifndef INBRD_H
#define INBRD_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "GmeBrd.h"
//#include "Cell.h"
#include "InBrd.h"
#include "OutBrd.h"
using namespace std;

class InBrd:public GmeBrd
{
private:
   Cell **c;
protected:
public:
    InBrd():GmeBrd()
    {
        
    }
    
    InBrd(int r, int cl, int m): GmeBrd(r,cl,m)
    {
        celdata();
    }
    
    ~InBrd()
    {
        for (int i = 0; i < row; i++) {
            delete[] *(c + i);}
        delete[] c;
    }
    
    friend void OutBrd::dspBrd(InBrd &a);
    
    void celdata()
    {
        c = new Cell*[row];
        for (int i = 0; i < row; i++) {
            *(c + i) = new Cell [col];
        }
        
        for (int i = 0; i < row; i++) 
        {
            for (int j = 0; j < col; j++) {
                c[i][j].setSym('-');
                c[i][j].setnrow(i + 1);
                c[i][j].setncol(j + 1);
            }
        }
    }
    void addMine();
    
    void dspBrd()
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
};


#endif /* INBRD_H */

