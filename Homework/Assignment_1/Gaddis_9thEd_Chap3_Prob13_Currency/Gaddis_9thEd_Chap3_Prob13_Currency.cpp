/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap3_Prob13_Currency.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 1:44 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Write a program that will convert U.S. dollar amounts to Japanese yen and to 
 * euros, storing the conversion factors in the constants YEN_PER_DOLLAR and
 * EUROS_PER_DOLLAR. Format your currency amounts in fixed-point notation, with
 * two decimal places of precision, and be sure the decimal point is always
 * displayed.
 */
int main(int argc, char** argv) {

    const float YEN_PER_DOLLAR = 106.49;
    const float EUROS_PER_DOLLAR = 0.88;
    float yens = 0, euros = 0, dollars = 0;
    
    cout << fixed << setprecision(2);
    cout << "Enter an amount in dollars:    ";
    cin >> dollars;

    yens = dollars * YEN_PER_DOLLAR;
    euros = dollars * EUROS_PER_DOLLAR;

    cout << yens << " yens"<< endl;
    cout << euros << " euros" << endl;

    return 0;
}

