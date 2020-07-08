/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Structure_Weather_Statistics.cpp
 * Author: Gabrielle
 *
 * Created on July 7, 2020, 10:57 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * Weather Statistics
 * Write a program that uses a structure to store the following weather data 
 *      for a particular
 * month:
 * Month
 * Total Rainfall - Inches
 * High Temperature - Degrees Fahrenheit
 * Low Temperature -Degrees Fahrenheit
 * Average Temperature - Degrees Fahrenheit
 * The program should have an array of 12 structures to hold weather data for an
 * entire year. When the program runs, it should ask the user to enter data for each
 * month. (The average temperature should be calculated.) Once the data are entered
 * for all the months, the program should calculate and display the average monthly
 * rainfall, the total rainfall for the year, the highest and lowest temperatures for the
 * year (and the months they occurred in), and the average of all the monthly average
 * temperatures.
 * Input Validation: Only accept temperatures within the range between –100 and +140
 * degrees Fahrenheit.
 */

struct Weather{
    string name;
    int rInch;
    int high;
    int low;
    float avg;
    
};

int main(int argc, char** argv) {

     const int NMONTHS = 12;
    Weather month[NMONTHS];
    float rainSum = 0, tempSum = 0, avgRain = 0, avgTemp =0;
    int loIndex = 0, hiIndex = 0;
    for (int i=0; i <NMONTHS; i++)
    {
        cin >> month[i].name;
        cin >> month[i].rInch;
        do {
        cin >> month[i].low;
        } while (month[i].low <-100||month[i].low >140);
        do {
        cin >> month[i].high;
        } while (month[i].high <-100||month[i].high >140);
        rainSum+=month[i].rInch;
        month[i].avg = (month[i].high+month[i].low)/2.00;
        tempSum+=month[i].avg;
        if (month[i].high > month[hiIndex].high)
        {
            hiIndex = i;
        }
        if (month[i].low < month[loIndex].low)
        {
            loIndex = i;
        }
    }
    avgRain = rainSum/NMONTHS;
    avgTemp = tempSum/NMONTHS;
    cout << setprecision(2);
    cout << "Average Rainfall " << avgRain << " inches/month"<< endl;
    cout << "Lowest  Temperature " <<left << setw(9) << month[loIndex].name << month[loIndex].low<< " Degrees Fahrenheit" << endl;
    cout << "Highest Temperature " <<left << setw(8)<< month[hiIndex].name<< month[hiIndex].high << " Degrees Fahrenheit" << endl;
    cout << "Average Temperature for the year " << avgTemp << " Degrees Fahrenheit" << endl;
    return 0;
}

