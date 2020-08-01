/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Cell.h"

Cell::Cell () {
    display = '*';
    symbol = '-';
    hidden = true; 
    flagged = false;
    nrow=0;
    ncol=0;
    mine = false;
    value = 0;
}

Cell::Cell (bool m) {
    display = '*';
    symbol = '-';
    hidden = true;
    flagged = false;
    nrow=0;
    ncol=0;
    mine = m;
    value = 0;
} 

Cell& Cell::operator =(const Cell &right)
{
    display = right.display;
    symbol = right.symbol;
    hidden = right.hidden; 
    flagged = right.flagged;
    nrow=right.nrow;
    ncol=right.ncol;
    mine = right.mine;
    value = right.value;
    return *this;
}