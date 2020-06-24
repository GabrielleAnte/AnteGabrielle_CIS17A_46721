/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap8_Prob7_BinaryStringSearch.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 3:02 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * Modify the binary search function presented in this chapter so it searches 
 * an array of strings instead of an array of ints. Test the function with a 
 * driver program. Use Program 8-8 as a skeleton to complete. (The array must 
 * be sorted before the binary search will work.)
 */
const int NUM_NAMES = 20;

void selectionSort(string name[]);
void displayArranged(string name[]);
int binarySearch(string name[], string target);

int main(int argc, char** argv) {

    string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                               "Looney, Joe", "Wolfe, Bill", "James, Jean",
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                               "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };

    string target;
    int location = 0;

    selectionSort(names);   // arranges names in alphabetical order
    displayArranged(names); // displays the sorted array

    // Name search; must be exact
    cout << "What name are you looking for?" << endl;
    getline(cin, target);
    location = binarySearch(names, target);

    if (location != -1) {
        cout << target << " is found at position " << location + 1 << endl;
    }
    else {
        cout << target << " is not found." << endl;
    }
        return 0;
}

void selectionSort(string name[]) {
    int minIndex;
    string minValue;
    string temp;

    for (int i = 0; i < NUM_NAMES - 1; i++) {
        minIndex = i;
        minValue = name[i];
        for (int j = i + 1; j < NUM_NAMES; j++) {
            if (name[j] < minValue) {
                minValue = name[j];
                minIndex = j;
            }
        }
        temp = name[minIndex];
        name[minIndex] = name[i];
        name[i] = temp;
    }
}

void displayArranged(string name[]) {
    for (int i = 0; i < NUM_NAMES; i++)
    {
        cout << name[i] << endl;
    }
}

int binarySearch(string name[], string target) {
    int first = 0,                  // first element
        last = NUM_NAMES - 1,       // last element
        middle,                     // mid point of search
        position = -1;              // position of search value
    bool found = false;             // Flag

    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (name[middle] == target) {
            found = true;
            position = middle;
        }
        else if (name[middle] > target) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
    }
    return position;
}