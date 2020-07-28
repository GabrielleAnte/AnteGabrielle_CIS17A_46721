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
#include <cstdlib>
#include <ctime>
#include "GmeBrd.h"
#include "OutBrd.h"
using namespace std;

class InBrd:public GmeBrd
{
private:
   Cell **c;
   int rw;
protected:
public:
    InBrd():GmeBrd()
    {
        rw=0;
    }
    
    InBrd(int r, int cl, int m): GmeBrd(r,cl,m)
    {
        rw=r;
        **c = new Cell*[r];
        for (int i = 0; i < r; i++) {
            *(c + i) = new Cell [cl];
        }
    }
    
    ~InBrd()
    {
        for (int i = 0; i < rw; i++) {
            delete[] *(c + i);}
        delete[] c;
    }
    
    void addMine()
    {
        srand(time(0));
        int row=getRow(), col = getCol(), mines=getMine();
        int rnum=0, cnum=0;
       /* for (int i = 0; i < rnum; i++) {
            for (int j = 0; j < cnum; j++) {
                *(*(c+ i) + j)  = data();
                //c[i][j].nrow = i + 1;
                //c[i][j].ncol = j + 1;
            }
        }*/
        for (int i = 0; i < mines; i++) {
            do {
                rnum = rand() % row;
                cnum = rand() % col;
            } while (c[rnum][cnum].getMine() == true);
            c[rnum][cnum].setMine(true);
            c[rnum][cnum].setSym('%');
        }
    }
    friend void OutBrd::dspBrd();
    
};


#endif /* INBRD_H */

