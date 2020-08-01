/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
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
 * input validation, r m n player needed
 * fix seg fault from clear funct - took a while to find
 * overloaded function
 * added ai as first game, to show overloaded constructor at play
 * static game count added
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
    
    do{
    Game g("Minesweeper");
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
        return true;
    }
    else {
        return false;
    }
}

