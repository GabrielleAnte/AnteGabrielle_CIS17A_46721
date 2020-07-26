/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap16_Prob1_DateExceptions.cpp
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:26 PM
 */

#include "Date.h"

using namespace std;

/*
 * Modify the Date class you wrote for Programming Challenge 1 of Chapter 13 
 * (Date). The class should implement the following exception classes:
 * invalidDay - Throw when an invalid day (<1 or > 31) is passed to the class.
 * invalidMonth - Throw when an invalid month (<1 or >12) is passed to the class.
 * Demonstrate the class in a driver program.
 */
int main(int argc, char** argv) {

    Date mdy;
    
    mdy.getInfo();
    mdy.print();
    
    return 0;
}

