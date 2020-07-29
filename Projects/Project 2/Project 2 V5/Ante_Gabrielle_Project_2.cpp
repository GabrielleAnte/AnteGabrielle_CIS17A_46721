/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 
/* 
 * File:   Ante_Gabrielle_Project_1.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 8:04 AM
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
 * got InBrd and OutBrd dspBord to work
 * successfully communicated as friends
 */

int main(int argc, char** argv) {
    
    Game g("Minesweeper");
    g.shoStrt();
    g.play();
    
   
    
    return 0;

}
