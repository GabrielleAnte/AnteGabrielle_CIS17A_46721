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
    {}
    
    InBrd(int r, int cl, int m): GmeBrd(r,cl,m)
    { celdata();}
    
    ~InBrd();
    
    friend void OutBrd::rdBrd(InBrd &a);
    
    void celdata();
    void addMine();
    void addVal();
    void dspBrd();
    int **sweep();
    InBrd& operator =(const InBrd &right);
   
};


#endif /* INBRD_H */

