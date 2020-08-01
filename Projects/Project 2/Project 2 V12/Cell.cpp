#include "Cell.h"

/**This is the default constructor for Cell.h*/
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

/** Constructor #2: This is an overloaded constructor with a bool parameter for if the cell has a mine */
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

/**This is a function for the assignment operator for the Cell class */
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