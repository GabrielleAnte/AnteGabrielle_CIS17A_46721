/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap4_Prob10_DaysInAMonth.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 1:55 PM
 */

#include <iostream>

using namespace std;

/*
 * Write a program that asks the user to enter the month (letting
 * the user enter an integer in the range of 1 through 12) and the
 * year. The program should then display the number of days in
 * that month.
 */
int main(int argc, char** argv) {

    int month = 0, year = 0, days = 0;
    cout << "Enter a month (1-12):  ";
    cin >> month;
    cout << "Enter a year:  ";
    cin >> year;

    // if year divisible by 100 & 4
    if (month == 2 && year % 400 == 0) {
        days = 29;
    }
    // if year is divisible by 4 but not 100
    else if (month == 2 && year % 4 == 0) {
        days = 29;
    }
    // if year is divisible by 4 but not 100
    else if (month == 2) {
        days = 28;
    }
    // if month is before August and odd
    else if (month < 8 && month % 2 != 0){
        days = 31;
    }
    // if month is after July and even
    else if (month > 7 && month % 2 == 0){
        days = 31;
    }
    else {
        days = 30;
    }

    cout << days << " days";

    return 0;
}

