/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap5_Prob11_Population.cpp
 * Author: Gabrielle
 *
 * Created on June 23, 2020, 2:12 PM
 */

#include <iostream>

using namespace std;

/*
 * Write a program that will predict the size of a population of  
 * organisms. The program should ask the user for the starting
 * number of organisms, their average daily population increase (as
 * a percentage), and the number of days they will multiply. A loop 
 * should display the size of the population for each day.
 */
int main(int argc, char** argv) {
    int population = 0, newPopulation = 0, days = 0;
    float increase = 0;

    cout << "Enter the starting number of organisms:    ";
    cin >> population;
    while (population < 2){
        cout << "Invalid. Enter the starting number of organisms:    ";
        cin >> population;
    }
    cout << "Enter the average daily population increase (%):    ";
    cin >> increase;
    while (increase < 0) {
        cout << "Invalid. Enter the average daily population increase"
                "(%):    ";
        cin >> increase;
    }
    cout << "Enter the number of days they will multiply:    ";
    cin >> days;
    while (days < 1) {
        cout << "Invalid. Enter the number of days they will multiply:"
                "   ";
        cin >> days;
    }
    for (int i = 0; i < days; i++) {
        newPopulation = population * increase / 100;
        cout << "Day " << i + 1 << ":   ";
        population = population + newPopulation;
        cout << population << endl;
    }

    return 0;
}

