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
    void allHdn();
    
    virtual void dspBrd();
};

#endif /* OUTBRD_H */

