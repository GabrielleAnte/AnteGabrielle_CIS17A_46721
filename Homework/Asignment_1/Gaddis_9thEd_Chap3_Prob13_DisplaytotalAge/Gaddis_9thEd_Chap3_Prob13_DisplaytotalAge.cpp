/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap3_Prob13_DisplaytotalAge.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 1:44 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Write a cout statement so the variable total Age is displayed in a field of 
 * 12 spaces, in fixed-point notation, with a precision of 4 decimal places. 
 */
int main(int argc, char** argv) {

    float totalAge = 1.234567890;
    
    cout << fixed << setprecision(4);
    cout << setw(12) << totalAge;
    
    return 0;
}

