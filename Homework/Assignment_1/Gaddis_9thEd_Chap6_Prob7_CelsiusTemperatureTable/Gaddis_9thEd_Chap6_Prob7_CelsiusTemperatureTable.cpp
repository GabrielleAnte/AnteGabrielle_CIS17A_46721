/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap6_Prob7_CelsiusTemperatureTable.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 2:21 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Write a function named celsius that accepts a Fahrenheit temperature
 * as an argument. The function should return the temperature, converted
 * to Celsius. Demonstrate the function by calling it in loop that displays a
 * table of the Fahrenheit temperatures 0 through 20 and their Celsius 
 * equivalents.
 */

double celsius(double fahrenheit);

int main(int argc, char** argv) {
    double celsius_temp = 0;

    cout << fixed << setprecision(2);
    cout << setw(5) << "F" << setw(8) << "C" << endl;
    for (int i = 0; i <= 20; i++) {
        celsius_temp = celsius(i);
        cout << setw(5) << i << setw(8) << celsius_temp << endl;
    }

    return 0;
}

double celsius(double fahrenheit) {
    double celsius = 0;

    celsius = 5 * (fahrenheit - 32) / 9;

    return celsius;
}

