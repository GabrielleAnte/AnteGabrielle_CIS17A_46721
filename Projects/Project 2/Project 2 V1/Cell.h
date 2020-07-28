/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cell.h
 * Author: Gabrielle
 *
 * Created on July 24, 2020, 4:59 AM
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
protected:
public:
    Cell () {
        display = '*';
        symbol = '-';
        //hidden = true; //uncomment later
        hidden = false; // comment/delete later
        flagged = false;
        nrow=0;
        ncol=0;
        mine = false;
        value = 0;
    }
    
    Cell (bool m, int v)
    {
        display = '*';
        symbol = '-';
        hidden = true;
        mine = m;
        flagged = false;
        value = v;
    }
    
    void setSym();
    void setDisp(char a){display=a;}
    char getDisp(){return display;}
    char getSym(){return symbol;}
    bool getHddn(){return hidden;}
    bool getFlgd(){return flagged;}
    int getnRow(){return nrow;}
    int getnCol(){return ncol;}
    bool getMine(){return mine;}
    int getVal(){return value;}
};

#endif /* CELL_H */

