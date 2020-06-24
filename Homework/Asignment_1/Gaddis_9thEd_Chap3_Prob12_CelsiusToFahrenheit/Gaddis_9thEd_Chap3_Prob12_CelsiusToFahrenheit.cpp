/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap3_Prob12_CelsiusToFahrenheit.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 1:27 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 *  Write a program that converts Celsius temperatures to Fahrenheit temperatures.
 */
int main(int argc, char** argv) {

    double celsius = 0, fahrenheit = 0;
  
    cout << "Enter a temperature in Celsius:    ";
    cin >> celsius;

    fahrenheit = ((9 * celsius)/5) + 32;
    
    cout << fahrenheit << " degrees Fahrenheit";

    return 0;
}

