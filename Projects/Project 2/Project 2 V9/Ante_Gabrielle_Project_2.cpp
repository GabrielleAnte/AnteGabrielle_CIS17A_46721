/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 
/* 
 * File:   Ante_Gabrielle_Project_1.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 8:25 PM
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
 * function def of Cell h to Cell.cpp
 * check if space is taken
 * input validation added
 * rerun function added
 * now a fully working code
 * 
 * seems InBrd h and InBrd cpp are complete
 * seems Cell.h and Cell.cpp are complete
 * do input validation later 
 * yet to finish OutBrd, Gme, GmeBrd and Player h to cpp
 * next version:
 * compare to list and add features/modifications
 */

bool reRun();

int main(int argc, char** argv) {
    
    char y;
    do{
    Game g("Minesweeper");
    g.shoStrt();
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

