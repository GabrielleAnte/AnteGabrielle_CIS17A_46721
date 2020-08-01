/* 
 * File:   Player.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 3:47 AM
 */

#ifndef _DIAGRAM_PLAYER_H
#define _DIAGRAM_PLAYER_H
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <regex>
#include <string>
#include <sstream>
#include "Stats.h"
using namespace std;

class Player: public Stats<int>
{
private: 
    string name;
    int row, col, mine;
    int number;
    int pts;
    bool invalid;
public:
    /** Default constructor for Player class */
    Player():Stats()
    {   
        name = "Anon";
        row=0;
        col=0;
        mine=0;
        invalid=true;
        pts=0.00;
    }
   
    Player(string n); ///< function prototype for constructor #2
    
    class BadRC{}; ///< class for exception handling: invalid rows and columns
    class BadMns{}; ///< class for exception handling: invalid number of mines
    class Badrc{};  ///< class for exception handling: invalid cell selection
    class BadChc{}; ///< class for exception handling: cell selection outside of range
    class BadFlag{}; ///< choice to flag the cell is neither Y or N
    class LessTn1{}; ///< if the row and column chosen to set the board is invalid
        
    void setName(); ///< function prototype to setName function
    void setBrd(); ///< function prototype to setBrd function
    
    string getName(){return name;} ///< accessor function for the name member variable
    int getRow(){return row;}///< accessor function for the row member variable
    int getCol(){return col;}///< accessor function for the column member variable
    int getMine(){return mine;}///< accessor function for the nmine member variable
    void getChc(int &rChoice, int &cChoice); ///< function prototype for the pass by reference of the player's cell selection
    
    char askFlg();
    
    void stats(bool win);
    
    /**, returns the point from the stats class, essentially overrides the stats points function: non-virtual method*/
    int points()
    { return point;}
    
    void setName(string n){ name=n;}
    void setBrd(int r, int c, int m); ///< function prototype for the setBrd function
    void autoChc(int &rChoice,int &cChoice); ///< function prototype for the autoChc function
    char autoFlg(); ///< function prototype for the autoFlg function
    
    Player& operator =(const Player &right); ///< function prototype for the overloaded assignment operator
};

#endif /* PLAYER_H */
#endif
