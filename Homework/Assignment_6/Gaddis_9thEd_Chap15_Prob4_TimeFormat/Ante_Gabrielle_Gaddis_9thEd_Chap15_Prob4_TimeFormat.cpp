/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap15_Prob4_TimeFormat.cpp
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:24 PM
 */

#include <iostream>
#include "MilTime.h"

using namespace std;

/*
 * In the program 15-20, the file Time.h contains a Time class. Design a class
 * called MilTime that is derived from the Time class. The MilTime class should 
 * convert time in military (24-hour) format to the standard time format used by 
 * the Time class. The class should have the following member variables:
 * milHours: Contains the hour in 24-hour format. For example, 1:00 pm would be 
 *          stored as 1300 hours, and 4:30 pm would be stored as 1630 hours.
 * milSeconds: Contains the seconds in standard format.
 * The class should have the following member functions: 
 * Constructor: The constructor should accept arguments for the hour and 
 *          seconds, in military format. The time should then be converted to 
 *          standard time and stored in the hours, min, and sec variables of the 
 *          Time class.
 * setTime: Accepts arguments to be stored in the milHours and milSeconds 
 *          variables. The time should then be converted to standard time and 
 *          stored in the hours, min, and sec variables of the Time class.
 * getHour: Returns the hour in military format.
 * getStandHr: Returns the hour in standard format.  
 * Demonstrate the class in a program that asks the user to enter the time in 
 * military format. The program should then display the time in both military 
 * and standard format.
 * 
 * Input Validation: The MilTime class should not accept hours greater than 2359, 
 * or less than 0. It should not accept seconds greater than 59 or less than 0.
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

