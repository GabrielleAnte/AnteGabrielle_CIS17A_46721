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
    {
        cell[r-1][c-1].setHddn(false);
    }
    
    void flag(int r,int c)
    {
        cell[r-1][c-1].setFlgd(true);
    }
    void unflag(int r,int c)
    {
        cell[r-1][c-1].setFlgd(false);
    }
    bool loss(int r,int c)
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
    
    bool ckFlg(int r, int c)
    {
        return cell[r-1][c-1].getFlgd();   
    }
    
    bool chkClr(int r, int c)
    {
        if (cell[r - 1][c - 1].getSym() == '-' && cell[r - 1][c - 1].getVal() == 0){
            return true;
        }
        else
        {
            return false;
        }
    }
    void clear(int r, int c) 
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
    
    
    virtual void dspBrd();
};

#endif /* OUTBRD_H */

