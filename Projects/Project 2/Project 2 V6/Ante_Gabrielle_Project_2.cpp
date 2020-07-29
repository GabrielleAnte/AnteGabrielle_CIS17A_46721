/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 
/* 
 * File:   Ante_Gabrielle_Project_1.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 9:33 AM
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
 * removed some commented/unnecessary code
 * getChc in player function
 * moved InBrd.h function def to InBrd.cpp
 * InBrd dspBrd used to check what is under the board + to show after game over
 * reveal function in OutBrd created; 
 * gameOver loss function checked
 * 
 * seems InBrd h and InBrd cpp are complete
 * do input validation later
 * flag move to be added
 * 
 */

int main(int argc, char** argv) {
    
    Game g("Minesweeper");
    g.shoStrt();
    g.play();
    
   
    
    return 0;

}
