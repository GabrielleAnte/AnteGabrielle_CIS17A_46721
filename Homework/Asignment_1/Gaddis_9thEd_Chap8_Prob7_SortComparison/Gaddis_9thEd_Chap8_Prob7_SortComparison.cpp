/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap8_Prob7_SortComparison.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 3:02 PM
 */

#include <iostream>

using namespace std;

/*
 * Why is the selection sort more efficient than the bubble sort on large
 * arrays?
 */
int main(int argc, char** argv) {

    cout << "The selection sort performs fewer swaps than the bubble sort.\n"
            "Plus, the bubble sort only compares 2 elements at a time whereas\n"
            "the selection sort scans the whole array and then looks for the\n"
            "smallest/largest number and then moves it to its final position\n"
            "in the array. The next smallest/largest is then scanned for and\n"
            "swapped to its final position.";
    
    return 0;
}

