/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 
/* 
 * File:   Ante_Gabrielle_Project_1.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 5:55 PM
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
 * win function, fRemain function
 * some function def of OutBrd.h to cpp
 * 
 * seems InBrd h and InBrd cpp are complete
 * do input validation later 
 */

int main(int argc, char** argv) {
    
    Game g("Minesweeper");
    g.shoStrt();
    g.play();
    
   
    
    return 0;

}
