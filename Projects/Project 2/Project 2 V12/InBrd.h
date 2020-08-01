/* 
 * File:   InBrd.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 3:19 AM
 */

#ifndef _DIAGRAM_INBRD_H
#define _DIAGRAM_INBRD_H
#ifndef INBRD_H
#define INBRD_H

#include "GmeBrd.h"
#include "OutBrd.h"

class InBrd:public GmeBrd
{
private:
   Cell **c; ///< dynamically allocated array of objects to store the board and each cells properties
protected:
public:
    /** Default constructor for the inner board class*/
    InBrd():GmeBrd()
    {}
    
    /**Construction # 2 for the inner board class*/
    InBrd(int r, int cl, int m): GmeBrd(r,cl,m)
    { celdata();}
    
   
    ~InBrd(); ///< function prototype for the destructor for the inner board class*/
    
    friend void OutBrd::rdBrd(InBrd &a); ///< function prototype for the friend function that allows this outer board function to access the inner board member variables
    
    void celdata();///< function prototype for the celdata function
    void addMine();///< function prototype for the addMine function
    void addVal();///< function prototype for the addVal function
    void dspBrd();///< function prototype for the dspBrd function, esentially overrides the GmeBrd display board function
    int **sweep();///< function prototype for the sweep function
    InBrd& operator =(const InBrd &right); ///< function prototype for the overloaded assignment operator 
   
};

#endif /* INBRD_H */
#endif
