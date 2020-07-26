/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap15_Prob1_EmployeeAndProductionWorkerClasses.cpp
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:23 PM
 */

#include <iostream>
#include <string>
#include "PrdWrk.h"

using namespace std;

/*
 * Design a class named Employee. The class should keep the following 
 * information:
 * Employee name
 * Employee number
 * Hire date
 * Write one or more constructors, and the appropriate accessor and mutator 
 * functions, for the class.
 * Next, write a class named ProductionWorker that is derived from the Employee 
 * class. The ProductionWorker class should have member variables to hold the 
 * following information:
 * Shift (an integer)
 * Hourly pay rate (a double)
 * The workday is divided into two shifts: day and night. The shift variable 
 * hold an integer value representing the shift that the employee works. The day 
 * shift is shift 1 and the night shift is shift 2. Write one or more 
 * constructors, and the appropriate accessor and mutator functions, for the 
 * class. Demonstrate the classes by writing a program that uses a 
 * ProductionWorker object.
 */

int main(int argc, char** argv) {

    PrdWrk s("Jake Johnston",32458,"05/23/2019",1,5.38);
    string name="", date="";
    int num;
    float rate;
    
    cout << "Initializing: " << endl << endl;
    cout << "Production Worker Name:" << s.getName() << endl;
    cout << "Production Worker Employee Number: " << s.getNum() << endl;
    cout << "Hire Date: " << s.getDate() << endl;
    cout << "Production Worker Shift: ";
    if (s.getShft()==1) {cout << "Day";}
    else {cout <<"Night";}
    cout << endl;
    cout << "Production Worker Rate: " << s.getRate();
    cout << endl;
    
    cout << endl << "Setting Values: " << endl << endl;
    cout << "Enter the Production Worker's Name: ";
    getline(cin,name);
    s.setName(name);
    cout << "Enter the Production Worker's Employee Number: ";
    cin >> num;
    s.setNum(num);
    cin.ignore();
    cout << "Enter the Hire Date: ";
    getline(cin,date);
    s.setDate(date);
    cout << "Enter 1 for Day Shift or 2 for Night Shift: ";
    cin >> num;
    s.setShft(num);
    cout << "Enter the Production Worker Rate: ";
    cin >> rate;
    s.setRate(rate);
    cout << endl;
    
    
    cout << "Production Worker Name:" << s.getName() << endl;
    cout << "Production Worker Employee Number: " << s.getNum() << endl;
    cout << "Hire Date: " << s.getDate() << endl;
    cout << "Production Worker Shift: ";
    if (s.getShft()==1) {cout << "Day";}
    else {cout <<"Night";} 
    cout << endl;
    cout << "Production Worker Rate: " << s.getRate();
    cout << endl;
    
    return 0;
}

