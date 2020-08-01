/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cell.h
 * Author: Gabrielle
 *
 * Created on July 25, 2020, 12:54 AM
 */

#ifndef _DIAGRAMS_CELL_H
#define _DIAGRAMS_CELL_H
#ifndef CELL_H
#define CELL_H

class Cell{
private:
    char display; ///< what is seen by player
    char symbol; ///< to be outputted, either mine(%),empty (-) or value
    bool hidden; ///< if the player can see cell
    bool flagged; ///< if the player holds the cell
    int nrow; ///< which row cell is located
    int ncol; ///< which col cell is located
    bool mine; ///< if the cell has a mine
    int value; ///< what the cell value is; hint for adjacent cell
public:
    Cell ();
    Cell (bool m);
    Cell& operator =(const Cell &right);

    void setDisp(char a){display=a;} 
    void setSym(char a){symbol=a;}
    void setHddn(bool a){hidden=a;}
    void setFlgd(bool a){flagged=a;}
    void setMine(bool a){mine=a;}
    void setVal(int a){value=a;}
    void setnrow(int a){nrow=a;}
    void setncol(int a){ncol=a;}
    
    char getDisp()const {return display;} 
    char getSym() const {return symbol;}
    bool getHddn()const {return hidden;}
    bool getFlgd()const {return flagged;}
    bool getMine()const {return mine;}
    int getVal() const {return value;}
    int getnRow() const {return nrow;}
    int getnCol() const {return ncol;}
};

#endif /* CELL_H */
#endif
