/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap16_Prob2_TimeFormatExceptions.cpp
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:27 PM
 */

#include <iostream>
#include "MilTime.h"

using namespace std;

/*
 * Modify the MilTime class you created for Programming Challenge 4 of Chapter 
 * 15 (Time Format). The class should implement the following exceptions:
 * BadHour - Throw when an invalid hour (< 0 or > 2359) is passed to the class.
 * BadSeconds - Throw when an invalid number of seconds (< 0 or > 59) is passed 
 *          to the class.
 * Demonstrate the class in a driver program.
 */
int main(int argc, char** argv) {
    int h=0,s=0;
    cout << "Military format: " << endl;
    cout << "Enter the time in military hours: "; 
    cin >> h;
    cout << "Enter the time in military seconds: ";
    cin >> s;
    cout << endl;
    
    MilTime m(h,s);
    m.print();
    
    return 0;
}

