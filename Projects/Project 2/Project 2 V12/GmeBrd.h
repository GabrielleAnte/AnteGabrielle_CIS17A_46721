/* 
 * File:   GmeBrd.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 3:17 AM
 */
#ifndef _DIAGRAM_GMEBRD_H
#define _DIAGRAM_GMEBRD_H
#ifndef GMEBRD_H
#define GMEBRD_H

#include "Cell.h"

class GmeBrd{
private:
    Cell **c; ///< a pointer to pointer that essentially forms the minesweeper game board
protected:
    static int row, col, mine; ///< row, col, mine stores the number of rows and cols and mines for the game, holds same value for either the inner board or outer board
public: 
    GmeBrd(); ///<function prototype for default constructor
    GmeBrd(int r, int cl, int m);///<function prototype for constructor #2
    
    ~GmeBrd() ///< default constructor
    { delete[] c;}
    
    int getRow() const {return row;} ///< accessor function that returns the row of the gameboard
    int getCol() const {return col;} ///< accessor function that returns the column of the gameboard
    int getMine() const {return mine;} ///< accessor function that returns the number of mines for the gameboard
    
    void setRow(int a){row=a;} ///< member function to set the number of rows for the board
    void setCol(int a){col=a;}///< member function to set the number of columns for the board
    void setMine(int a){mine=a;}///< member function to set the number of mines for the board
    
    virtual void dspBrd()=0; ///< pure virtual function that identifies this class as an abstract base class
};

#endif /* GMEBRD_H */
#endif
