/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OutBrd.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 3:19 AM
 */

#ifndef OUTBRD_H
#define OUTBRD_H

#include "Cell.h"


class InBrd;

class OutBrd: public GmeBrd
{
private:
    Cell **cell;
    
protected:
public:
    OutBrd():GmeBrd(){
   }
    
    void rdBrd(InBrd &a);
    
    void reveal(int r,int c)
    { cell[r-1][c-1].setHddn(false);}
    
    void flag(int r,int c)
    { cell[r-1][c-1].setFlgd(true);}
    
    void unflag(int r,int c)
    { cell[r-1][c-1].setFlgd(false);}
    
    bool spcOpn(int r, int c)
    {
        if (cell[r-1][c-1].getHddn()==false)
        {
            cout << "That cell is already open." << endl;
            return false;
        }
        else
        {
            return true;
        }
    }
    
    bool loss(int r,int c);
    
    bool win (int r, int c)
    {
        int count = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (cell[i][j].getMine() == true) {
                    count++;
                } else if (cell[i][j].getHddn() == false) {
                    count++;
                }
            }
        }
        if (count == row * col) {
            return true;
        } else {
            return false;
        }
    }
    
    bool ckFlg(int r, int c){return cell[r-1][c-1].getFlgd();}
    
    bool chkClr(int r, int c);
    void clear(int r, int c);
    
    int fRemain() 
    {
        int flags = 0, diff = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (cell[i][j].getFlgd() == true) {
                    flags++;
                }
            }
        }
        diff = mine - flags;
        return diff;
    }
    
    virtual void dspBrd();
};

#endif /* OUTBRD_H */

