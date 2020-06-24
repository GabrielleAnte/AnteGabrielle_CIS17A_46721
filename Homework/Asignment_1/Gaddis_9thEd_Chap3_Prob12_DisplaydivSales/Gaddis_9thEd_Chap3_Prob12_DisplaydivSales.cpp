/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chapter3_Prob12_DisplaydivSales.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 1:27 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 *  Write a cout statement so the variable divSales is displayed in a field of 8
 *  spaces, in fixed-point notation, with a precision of 2 decimal places. 
 *  The decimal point should always be displayed. 
 */
int main(int argc, char** argv) {

    float divSales = 1.20034567;
  
    
    cout << fixed << setprecision(2);
    cout << setw(8)<< divSales;
    
    return 0;
}

