/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap16_Prob4_AbsoluteValueTemplate.cpp
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:29 PM
 */

#include <iostream>

using namespace std;

/*
 * Write a function template that accepts an argument and returns its absolute
 * value. The absolute value of a number is its value with no sign. For example, 
 * the absolute value of -5 is 5, and the absolute value of 2 is 2. Test the 
 * template in a simple driver program.
 */

template <class T>
T abs(T num)
{
    T a = num;
    if (num<0)
    {
        a = -num;
    }
    
    return a;
}

int main(int argc, char** argv) {

    int a=0;
    long int b=0;
    float c=0.00;
    
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Absolute Value: " << abs(a) << endl << endl;
    
    cout << "Enter a long integer: ";
    cin >> b;
    cout << "Absolute Value: " << abs(b) << endl << endl;
    
    cout << "Enter a float number: ";
    cin >> c;
    cout << "Absolute Value: " << abs(c) << endl << endl;
    return 0;
}

