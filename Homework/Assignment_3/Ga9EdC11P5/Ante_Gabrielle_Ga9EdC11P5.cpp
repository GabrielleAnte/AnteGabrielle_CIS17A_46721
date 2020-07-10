/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Ga9EdC11P5.cpp
 * Author: Gabrielle
 *
 * Created on July 8, 2020, 1:23 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Modify the program that you wrote for programming challenge 4 (weather
 * statistics) so it defines an enumerated data type with enumerators for
 * months(JANUARY, FEBRUARY, so on). The program should use the enumerated
 * type to step through the elements of the array.
 */

//User Libraries
 struct Weather {
     float tRain;
     int high;
     int low;
     float avg;
 };
 
 enum Month {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST,
            SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

//Execution Begins Here            
int main(int argc, char** argv) {
 //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int NMONTH = 12;
    Weather m[NMONTH];
    Month mos;
    int hiIndex = 0, loIndex = 0;
    float rainSum = 0, tempSum = 0, avgRain = 0, avgTemp = 0;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    for (mos = JANUARY; mos <JULY; mos=static_cast<Month>(mos+1))
    {
        cout << "Enter the total rainfall for the month:" << endl;
        cin >> m[mos].tRain;
        cout << "Enter the high temp:" << endl;
        cin >> m[mos].high;
        cout << "Enter the low temp:" << endl;
        cin >> m[mos].low;
        
        if (m[mos].high > m[hiIndex].high)
        {
            hiIndex =mos;
        }
        if (m[mos].low < m[loIndex].low)
        {
            loIndex =mos;
        }
        m[mos].avg = (m[mos].high + m[mos].low)/2.00;
        rainSum += m[mos].tRain;
        tempSum+=m[mos].avg;
    }
    avgRain = rainSum / 6.00;
    avgTemp = tempSum / 6.00;
    
    //Display Outputs
    cout << fixed << setprecision(2);
    cout << "Average monthly rainfall:" << avgRain << endl;
    cout << "High Temp:" << m[hiIndex].high << endl;
    cout << "Low Temp:" << m[loIndex].low << endl;
    cout << fixed << setprecision(1);
    cout << "Average Temp:" << avgTemp;
    //Exit stage right!
    return 0;
}

