/* 
 * File:   OutBrd.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 3:19 AM
 */

#ifndef _DIAGRAMS_OUTBRD_H
#define _DIAGRAMS_OUTBRD_H
#ifndef OUTBRD_H
#define OUTBRD_H
#include "Cell.h"

class InBrd;

class OutBrd: public GmeBrd
{
private:
    Cell **cell;
    
public:
    OutBrd():GmeBrd(){ }
    
    void rdBrd(InBrd &a);
    
    void reveal(int r,int c)
    { cell[r-1][c-1].setHddn(false);}
    
    void flag(int r,int c)
    { cell[r-1][c-1].setFlgd(true);}
    
    void unflag(int r,int c)
    { cell[r-1][c-1].setFlgd(false);}
    
    bool spcOpn(int r, int c); ///< function prototype to determine if space is open
    bool loss(int r,int c); ///< function prototype to determine whether a mine is uncovered (whether player lost)
    bool win (int r, int c); ///< function prototype to determine whether player had uncovered all cells not containing a mine (whether player won) 
    
    bool ckFlg(int r, int c){return cell[r-1][c-1].getFlgd();}  
    bool chkClr(int r, int c);
    void clear(int r, int c);
    int fRemain();
    
    virtual void dspBrd();
};

#endif /* OUTBRD_H */
#endif
