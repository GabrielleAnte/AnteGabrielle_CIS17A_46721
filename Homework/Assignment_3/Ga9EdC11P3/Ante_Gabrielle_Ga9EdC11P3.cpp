/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Ga9EdC11P3.cpp
 * Author: Gabrielle
 *
 * Created on July 7, 2020, 6:10 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * Write a program that uses a structure to store the following data on a 
 *      company division:
 * Division Name(such as East, West, North, or South)
 * First-Quarter Sales
 * Second-Quarter Sales
 * Third-Quarter Sales
 * Fourth-Quarter Sales
 * Total Annual Sales
 * Average Quarterly Sales
 * The program should use four variables of this structure. Each variable 
 * should represent on of the following corporate divisions: East, West, North, 
 * and South. The user should be asked for the four quarters' sales figures for 
 * each division. Each division's total and average sales should be calculated 
 * and stored in the appropriate member of each structure variable. These 
 * figures should then be displayed on the screen.
 */

struct Div {
    string name;
    float qsales[4];
    float sumSls;
    float avgQSls;
};

int main(int argc, char** argv) {
 const int NUMDIV = 4;
    Div d[NUMDIV];

    //Initialize Variables
    string name[NUMDIV] = {"North", "West","East", "South"};
    for (int i = 0; i < NUMDIV; i++)
    {
        d[i].sumSls = 0;
        d[i].name = name[i];
        cout << d[i].name << endl;
        cout << "Enter first-quarter sales:" << endl;
        cin >> d[i].qsales[0];
        cout << "Enter second-quarter sales:" << endl;
        cin >> d[i].qsales[1];
        cout << "Enter third-quarter sales:" << endl;
        cin >> d[i].qsales[2];
        cout << "Enter fourth-quarter sales:" << endl;
        cin >> d[i].qsales[3];
        for (int j = 0; j < 4; j++)
        {
            d[i].sumSls+=d[i].qsales[j];
        }
        d[i].avgQSls = d[i].sumSls/4.00;
        //Display 
        cout << fixed << setprecision(2);
        cout << "Total Annual sales:$"<< d[i].sumSls<< endl;
        cout << "Average Quarterly Sales:$"<< d[i].avgQSls;
        if (i < NUMDIV - 1) 
        {
            cout << endl;
            
        }
    }
    

    //Exit stage right!
    return 0;
}

