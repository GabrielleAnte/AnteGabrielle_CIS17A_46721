/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrdWrk.h
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:32 PM
 */

#ifndef PRDWRK_H
#define PRDWRK_H

#include "Emp.h"

class PrdWrk : public Emp{
private:
    int shft;
    float rate;
public:
    PrdWrk():Emp()
    {
      shft=0;
      rate=0.00;
    }
    
    PrdWrk(string a, int b, string c, int s,float r):Emp(a, b, c)
    {
        shft=s;
        rate=r;
    }
    
    void setShft(int a){shft=a;}
    void setRate(float a){rate=a;}
    
    int getShft(){return shft;}
    float getRate(){return rate;}
};


#endif /* PRDWRK_H */

