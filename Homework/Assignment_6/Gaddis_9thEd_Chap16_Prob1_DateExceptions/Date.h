/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: Gabrielle
 *
 * Created on July 24, 2020, 3:53 PM
 */

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;

class Date{
private: 
    int month;
    int day;
    int year;
public:
    void getInfo ();
    void print();
    class inVdDy{};
    class inVdMo{};
};

void Date::getInfo()
{
    int m,d,y;
    bool invalid = true;

    cout << "Enter the month [1-12]: " ;
    cin >>m;
    
    while(invalid){
        try{
            if (m<1 || m >12)
            {
                throw inVdMo();
            }
            invalid = false;
        }
        catch (Date::inVdMo)
        {
            cout << "Month is out of range [1-12]. Try Again: ";
            cin >> m;
        }
    }
    month = m;
    invalid=true;
    
    cout << "Enter the day [1-31]: " ;
    cin >>d;
    
    while(invalid){
        try{
            if (d<1 || d >31)
            {
                throw inVdDy();
            }
            invalid = false;
        }
        catch (Date::inVdDy)
        {
            cout << "Day is out of range [1-31]. Try Again: ";
            cin >> d;
        }
    }
    day = d;
    
    cout << "Enter the year: " ;
    cin >>y;
    year = y;
    
}

void Date::print()
{
    string s;
    cout << month << "/" << day << "/" << year << endl;
    
    if(month==1) s= "January";
    else if(month==2) s= "February";
    else if(month==3) s= "March";
    else if(month==4) s = "April";
    else if(month==5) s= "May";
    else if(month==6) s= "June";
    else if(month==7) s= "July";
    else if(month==8) s= "August";
    else if(month==9) s= "September";
    else if(month==10) s= "October";
    else if(month==11) s= "November";
    else if(month==12) s= "December";
    
    cout << s << " " << day << ", " << year << endl;
    cout << day << " " << s << " " << year << endl;
    
}

#endif /* DATE_H */

