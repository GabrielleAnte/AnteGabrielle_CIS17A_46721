/**
 * \mainpage Description:
 * Minesweeper is a game where a set number of mines are secretly scattered 
 * around the board. The player’s goal is to reveal or clear out all the cells 
 * of the boards except for the cells where the mines are. To accomplish this, 
 * the player picks a cell at a time and determines whether that cell has a mine. 
 * If the player thinks the chosen cell has a mine underneath, then the player 
 * flags it (or just leaves it alone). If the player thinks the cell doesn’t have 
 * a mine, then the player can clear it. To help the player solve the puzzle, 
 * cells that don’t have a mine have numbers that tell the player how many mines 
 * surround that particular cell. The player automatically loses if they clear a 
 * cell containing a mine.
 * 
 * This game was chosen for the project because I am familiar with the rules of 
 * the game and I thought it would be simple enough to implement in code. Not to 
 * mention, I thought it would be fun to implement a game board that essentially 
 * reveals what it is hidden underneath, be it a value or a mine. This feature of 
 * revealing what is inside of a cell is important because it provided a way to 
 * apply the concepts learned. 

 * For Project 2, this game was selected again, in the interest of time. On top 
 * of that, the board also presents means to transition the code with each cell 
 * now acting as objects and having its own properties.  
 */
 
/* 
 * File:   Ante_Gabrielle_Project_1.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020,11:58 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <cstring>
#include <fstream>
#include "Game.h"
#include "Cell.h"

using namespace std;

/* 
 * stats class, template
 * player class from stats template
 * regex included
 * 
 * 
 * seems InBrd h and InBrd cpp are complete
 * seems Cell.h and Cell.cpp are complete
 * yet to finish OutBrd, Gme, GmeBrd and Player h to cpp
 * next version:
 * compare to list and add features/modifications
 * ideas stats tracking
 */

bool reRun();

int main(int argc, char** argv) {
    
    Game ai("Minesweeper", "Otto",7,8,5);
    ai.aPlay();
   
    cout << "Your Turn:" << endl << endl;
    Game a("Minesweeper");
    Game g = a;
    do{
        g.play();
    }while(reRun());
  
    return 0;
}

bool reRun() {
    char choice = ' ';
    do {
        cout << "Would you like to play again? [Y/N]" << endl;
        cin >> choice;
    } while (toupper(choice) !='Y' && toupper(choice) !='N');
    
    if (toupper(choice) =='Y')
    {
        Game g("Minesweeper");
        return true;
    }
    else {
        return false;
    }
}

