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
    Cell (); ///< function prototype for default constructor
    Cell (bool m);///< function prototype for second constructor
    Cell& operator =(const Cell &right); ///< function prototype for assignment operator

    void setDisp(char a){display=a;} ///< member function to set the display member variable, accepts char data type
    void setSym(char a){symbol=a;} ///< member function to set the symbol member variable, accepts char data type
    void setHddn(bool a){hidden=a;} ///< member function to set the hidden member variable, accepts bool data type
    void setFlgd(bool a){flagged=a;} ///< member function to set the flagged member variable, accepts bool data type
    void setMine(bool a){mine=a;} ///< member function to set the mine member variable, accepts bool data type
    void setVal(int a){value=a;} ///< member function to set the display member variable, accepts int data type
    void setnrow(int a){nrow=a;} ///< member function to set the row number member variable, accepts int data type
    void setncol(int a){ncol=a;}///< member function to set the column number member variable, accepts bool data type
    
    char getDisp()const {return display;} ///< accessor function to retrieve char display value
    char getSym() const {return symbol;} ///< accessor function to retrieve char symbol value
    bool getHddn()const {return hidden;} ///< accessor function to retrieve bool hidden value
    bool getFlgd()const {return flagged;}///< accessor function to retrieve bool flagged value
    bool getMine()const {return mine;}///< accessor function to retrieve bool mine value
    int getVal() const {return value;}///< accessor function to retrieve int cell value
    int getnRow() const {return nrow;}///< accessor function to retrieve int row number value
    int getnCol() const {return ncol;}///< accessor function to retrieve int column number value
};

#endif /* CELL_H */
#endif
