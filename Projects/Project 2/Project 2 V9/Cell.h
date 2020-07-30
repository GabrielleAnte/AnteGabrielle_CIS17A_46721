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

#ifndef CELL_H
#define CELL_H

class Cell{
private:
    char display; // what is seen
    char symbol; // to be outputted
    bool hidden; // if the player can see cell
    bool flagged; // if the player holds the cell
    int nrow; // which row cell is located
    int ncol; // which col cell is located
    bool mine; // if the cell has a mine
    int value; // what the cell value is; hint for adjacent cell
public:
    Cell ();
    Cell (bool m);
    
    void setDisp(char a){display=a;}
    void setSym(char a){symbol=a;}
    void setHddn(bool a){hidden=a;}
    void setFlgd(bool a){flagged=a;}
    void setMine(bool a){mine=a;}
    void setVal(int a){value=a;}
    void setnrow(int a){nrow=a;}
    void setncol(int a){ncol=a;}
    
    char getDisp(){return display;}
    char getSym(){return symbol;}
    bool getHddn(){return hidden;}
    bool getFlgd(){return flagged;}
    bool getMine(){return mine;}
    int getVal(){return value;}
    int getnRow(){return nrow;}
    int getnCol(){return ncol;}
};

#endif /* CELL_H */

