/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap15_Prob6_EssayClass.cpp
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:24 PM
 */

#include <iostream>
#include "Essay.h"
using namespace std;

/*
 * Design an Essay class that is derived from the GradedActivity class 
 * presented in this chapter. The Essay class should determine the grade a 
 * student receives on an essay. The student’s essay score can be up to 100, and 
 * is determined in the following manner: 
 * Grammar: 30 points 
 * Spelling: 20 points 
 * Correct length: 20 points 
 * Content: 30 points 
 * Demonstrate the class in a simple program.
 */
int main(int argc, char** argv) {

    int g=0,s=0,cl=0,c=0;
    cout << "Enter the grammar score [max 30]: ";
    cin >> g;
    cout << "Enter the spelling score [max 20]: ";
    cin >> s;
    cout << "Enter the correct length score [max 20]: ";
    cin >> cl;
    cout << "Enter the content score [max 30]: ";
    cin >> c;
    
    Essay e(g,s,cl,c);
    
    cout << endl;
    cout << "Essay Score: " << e.getScore() << endl;
    cout << "Letter Grade: " << e.getLtr() << endl;
    
    return 0;
}

