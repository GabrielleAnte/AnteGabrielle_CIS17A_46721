/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap16_Prob3_MinimumMaximumTemplates.cpp
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:28 PM
 */

#include <iostream>

using namespace std;

/*
 * Write templates for the two functions minimum and maximum. The minimum 
 * function should accept two arguments and return the value of the argument 
 * that is the lesser of the two. The maximum should accept two arguments and 
 * return the value of the argument that is the greater of the two. Design a 
 * simple driver program that demonstrates the templates with various data types.
 */

template <class T>
T minimum(T a, T b)
{
    if (a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template <class T>
T maximum(T a, T b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(int argc, char** argv) {

    int a=0,b=0;
    long int c=0,d=0;
    float e=0.00,f=0.00;
    
    cout << "Testing template functions with INTEGERS" << endl;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    cout << endl;
    cout << "Minimum: " << minimum(a,b) << endl;
    cout << "Maximum: " << maximum(a,b) << endl << endl;
    
    cout << "Testing template functions with LONG INTEGERS" << endl;
    cout << "Enter two long integers: ";
    cin >> c >> d;
    
    cout << endl;
    cout << "Minimum: " << minimum(c,d) << endl;
    cout << "Maximum: " << maximum(c,d) << endl << endl;
    
    cout << "Testing template functions with FLOATS" << endl;
    cout << "Enter two float numbers: ";
    cin >> e >> f;
    
    cout << endl;
    cout << "Minimum: " << minimum(e,f) << endl;
    cout << "Maximum: " << maximum(e,f) << endl << endl;
    return 0;
}

