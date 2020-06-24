/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap7_Prob6_RainOrShine.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 2:35 PM
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/*
 * An amateur meteorologist wants to keep track of weather changes during past
 * year's three-month summer season, and has designated each day as either
 * rainy ('R'), cloudy ('C'), or sunny ('S'). Write a program that stores this
 * information in a 3 x 30 array of characters, where the row indicates the 
 * month (0 = June, 1 = July, 2 = August) and the column indicates the day of
 * the month. Note that data is not being collected for the 31st of any month.
 * The program should begin by reading the weather data in from a file. Then 
 * it should create a report that displays for each month and for the whole
 * three-month period, how many days were rainy, how many were cloudy, and 
 * how many were sunny. It should also report which of the three months had 
 * the largest number of rainy days. Data for the program can be found in 
 * RainOrShine.txt file.
 */
int main(int argc, char** argv) {

    const int NUMBER_OF_MONTHS = 3, DAYS_OF_THE_MONTH = 30;
    char weather[NUMBER_OF_MONTHS][DAYS_OF_THE_MONTH];
    int rCount = 0, cCount = 0, sCount = 0, largeIndex = 0, 
        rMonth[NUMBER_OF_MONTHS] = { 0, 0, 0 };
    string month[NUMBER_OF_MONTHS] = { "June", "July", "August" };
   
    ifstream file;
    file.open("RainOrShine.txt");
    // for each month
    for (int i = 0; i < NUMBER_OF_MONTHS; i++) {    
        cout << setw(8) << month[i];    // row header
        //for each day
        for (int j = 0; j < DAYS_OF_THE_MONTH; j++) {
            file >> weather[i][j];
            cout << setw(2) << weather[i][j];
            if (weather[i][j] == 'R') {
                rMonth[i]++;    // rainy days per month
                rCount++;       // total rainy days
            }
            else if (weather[i][j] == 'C') {
                cCount++;
            }
            else if (weather[i][j] == 'S') {
                sCount++;
            }
        }
        if (rMonth[i] > rMonth[largeIndex]) {
            largeIndex = i;
        }
        cout << endl;
    }
    cout << endl << endl;
    file.close();
    cout << "Rainy Days: " << rCount << endl; 
    cout << "Cloudy Days: " << cCount << endl;
    cout << "Sunny Days: " << sCount << endl;
    cout << "Month with Largest Number of Rainy Days: ";
    cout << month[largeIndex] << " at " << rMonth[largeIndex];
    cout << " rainy days" << endl << endl;
    return 0;
}
