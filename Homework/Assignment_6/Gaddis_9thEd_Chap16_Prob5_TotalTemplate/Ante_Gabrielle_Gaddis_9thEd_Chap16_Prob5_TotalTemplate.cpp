/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap16_Prob5_TotalTemplate.cpp
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:29 PM
 */

#include <iostream>

using namespace std;

/*
 * Write a template for a function called total. The function should keep a 
 * running total of values entered by the user, then return the total. The 
 * argument sent into the function should be the number of values the function 
 * is to read. Test the template in a simple driver program that sends values of 
 * various types as arguments and displays the results.
 */

template <class T>
T total(T num)
{
    T sum = 0.00, n = 0;
    for (int i =0; i<num; i++)
    {
        cout << i+1 << ": Enter a number: ";
        cin >> n;
        sum+=n;
    }
    cout << endl;
    return sum;
}

int main(int argc, char** argv) {

    int a = 0,d = 0;
    long int b=0,e=0;
    float c=0.00,f=0.00;
    
    cout << "Integers: " << endl;
    cout << "How many numbers are you entering?" << endl;
    cin >> d;
    cout << "Enter the numbers as integers: " << endl;
    a=total(d);
    
    cout << "Total as an integer: " << a << endl << endl;
    
    cout << "Long Integers: " << endl;
    cout << "How many numbers are you entering?" << endl;
    cin >> e;
    cout << "Enter the numbers as long integers: " << endl;
    b=total(e);
   
    cout << "Total as a long integer: " << b << endl << endl;
    
    cout << "Floats: " << endl;
    cout << "How many numbers are you entering?" << endl;
    cin >> f;
    cout << "Enter the numbers as floats: " << endl;
    c=total(f);
    
    cout << "Total as a float: " << c << endl;
    return 0;
}

