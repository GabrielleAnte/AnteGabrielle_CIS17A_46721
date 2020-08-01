/* 
 * File:   Game.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 2:44 AM
 */

#ifndef _DIAGRAM_GAME_H
#define _DIAGRAM_GAME_H
#ifndef GAME_H
#define GAME_H

#include<iostream>
#include <string>
#include "InBrd.h"
#include "OutBrd.h"
#include "Player.h"
using namespace std;

class Game{
private:
    string name;    ///< stores string data type for name of the game
    Player player;  ///< Player object
    InBrd inbrd; ///< inner board object
    OutBrd outbrd; ///< outer board object
    int rC, cC; ///< player's choices for the row and column
    int diff; ///< difference between the number of flagged cells and the number of mines
    static int gmeCnt; ///< counts the number of games played during the run of the program
    GmeBrd *gb; ///< variable used to reference to the outboard in the play function, in application of the abstract base class
    void setUp(string p, int r, int c, int m); ///<used to set up 
    
protected:
    int nrow, ncol, nmines; ///< nrow, ncol, and nmines track how many rows, cols and mines are in this game
public:
    Game (); ///< default constructor prototype for the game class    
    Game(string n); ///< constructor #2 prototype for the game class 
    Game (string n, string p, int r, int c, int m); ///< constructor #3 prototype for the game class, activates auto/AI mode
    Game (const Game &right); ///<copy constructor prototype for the game class.
    
    void shoStrt();  ///< Display Intro function prototype
    void setUp();    ///< setUp function prototype
    void play();    ///< play function prototype
    void aPlay();   ///< play function prototype for the AI mode
    bool gmeOver(); ///< gameOver function prototype
};

#endif /* GAME_H */
#endif
