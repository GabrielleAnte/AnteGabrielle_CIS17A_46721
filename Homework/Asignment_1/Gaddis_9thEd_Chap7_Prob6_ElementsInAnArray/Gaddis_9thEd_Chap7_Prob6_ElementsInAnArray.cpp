/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap7_Prob6_ElementsInAnArray.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 2:35 PM
 */

#include <iostream>

using namespace std;

/*
 * Look at the following array definition:
 * int numbers[5] = { 1, 2, 3 };
 * What value is stored in numbers[2]?
 * What value is stored in numbers[4]?
 */
int main(int argc, char** argv) {

    int answer1 = 3 , answer2 = 0;
    int numbers[5] = { 1, 2, 3 };
    // This is my original answer
    cout << "What value is stored in numbers[2]? " << answer1 << endl; 
    cout << "What value is stored in numbers[4]? " << answer2 << endl; 
    // Checking work: This is what the program says
    cout << "What value is stored in numbers[2]? " << numbers[2] << endl; 
    cout << "What value is stored in numbers[4]? " << numbers[4] << endl; 
    
    return 0;
}
