/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GmeBrd.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 3:17 AM
 */

#ifndef GMEBRD_H
#define GMEBRD_H

#include <iostream>
#include "Cell.h"

using namespace std;

class GmeBrd{
private:
    Cell **c;
protected:
    static int row, col, mine;
public:
    
    GmeBrd()
    {
        row = 0;
        col=0;
        mine=0;
        c = new Cell*[row];
        for (int i = 0; i < row; i++) {
            *(c + i) = new Cell [col];
        }
    }
    
    GmeBrd(int r, int cl, int m)
    {
        row = r;
        col=cl;
        mine=m;
        c = new Cell*[row];
        for (int i = 0; i < row; i++) {
            *(c + i) = new Cell [col];
        } 
    }
    
    ~GmeBrd()
    {
        delete[] c;
    }
    
    int getRow() const {return row;}
    int getCol() const {return col;}
    int getMine() const {return mine;}
    
    void setRow(int a){row=a;}
    void setCol(int a){col=a;}
    void setMine(int a){mine=a;}
    
    virtual void dspBrd()=0;
};


#endif /* GMEBRD_H */

