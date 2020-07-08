/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Ga9EdC11P11.cpp
 * Author: Gabrielle
 *
 * Created on July 8, 2020, 12:30 AM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * A student has established the following monthly budget:
 * Housing                      $500.00
 * Utilities                       $150.00
 * Household Expenses    $65.00
 * Transportation             $50.00
 * Food                           $250.00
 * Medical                       $30.00
 * Insurance                    $100.00
 * Entertainment              $150.00
 * Clothing                       $75.00
 * Miscellaneious              $50.00
 * Write a program that has a MonthlyBudget structure designed to hold each of 
 * these expense categories. The program should pass the structure to a function 
 * that asks the user to enter the amounts spent in each budget category during 
 * a month. The program should then pass the structure to a function that 
 * displays a report indicatin the amount over or under in each category, as 
 * well as the amount over or under for the entire monthly budget.
 */

struct Budget
{   
    string ctgrs[10];
    string status[11];
    float total;
    float housing;
    float utls;
    float hshldex;
    float trnspt;
    float food;
    float med;
    float insrnce;
    float entrnmt;
    float clthng;
    float misc;
};

//Function Prototypes
void read(Budget &m);
float calc (float budget, float amount);
void print(Budget m);
//Execution Begins Here
int main(int argc, char** argv) {
 //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    Budget month;
    const int EXPCAT = 10;
    string name[EXPCAT] = {"Housing", "Utilities", "Household Expenses", "Transportation", 
            "Food", "Medical", "Insurance", "Entertainment", "Clothing", "Miscellaneous"};
    //Initialize Variables
    for (int i =0; i <EXPCAT; i++)
    {
        month.ctgrs[i] = name[i];
    }
    month.housing = 500.00;
    month.utls = 150.00;
    month.hshldex = 65.00;
    month.trnspt = 50.00;
    month.food = 250.00;
    month.med = 30.00;
    month.insrnce = 100.00;
    month.entrnmt = 150.00;
    month.clthng = 75.00;
    month.misc = 50.00;
    month.total = 0.00;
    //Process or map Inputs to Outputs
    read(month);
    //Display Outputs
    print(month);
    //Exit stage right!
    return 0;
}

void read(Budget &m)
{
    const int EXPCAT = 10;
    float diff[EXPCAT];
    float amount = 0;
    
    cout << "Enter housing cost for the month:$" << endl;
    cin >> amount;
    diff[0] = calc(m.housing, amount);
    cout << "Enter utilities cost for the month:$" <<endl;
    cin >> amount;
    diff[1] = calc(m.utls, amount);
    cout << "Enter household expenses cost for the month:$" <<endl;
    cin >> amount;
    diff[2] = calc(m.hshldex, amount);
    cout << "Enter transportation cost for the month:$" <<endl;
    cin >> amount;
    diff[3] = calc(m.trnspt, amount);
    cout << "Enter food cost for the month:$" <<endl;
    cin >> amount; 
    diff[4] = calc(m.food, amount);
    cout << "Enter medical cost for the month:$" <<endl;
    cin >> amount;
    diff[5] = calc(m.med, amount);
    cout << "Enter insurance cost for the month:$" <<endl;
    cin >> amount;
    diff[6] = calc(m.insrnce, amount);
    cout << "Enter entertainment cost for the month:$" <<endl;
    cin >> amount; 
    diff[7] = calc(m.entrnmt, amount);
    cout << "Enter clothing cost for the month:$" <<endl;
    cin >> amount;
    diff[8] = calc(m.clthng, amount);
    cout << "Enter miscellaneous cost for the month:$" <<endl;
    cin >> amount;
    diff[9] = calc(m.misc, amount);
    
    for (int i = 0; i < EXPCAT; i++)
    {
        m.total+=diff[i];
        if (diff[i] > 0)
        {
            m.status[i] = "Under";
        }
        else if (diff[i] == 0)
        {
            m.status[i] = "Even";
        }
        else
        {
            m.status[i] = "Over";
        }
    }
    if (m.total > 0)
        {
            m.status[10] = "under";
        }
        else if (m.total == 0)
        {
            m.status[10] = "even";
        }
        else
        {
            m.total = -m.total;
            m.status[10] = "over";
        }
}

float calc (float budget, float amount)
{
    float diff = 0;
    diff = budget - amount;
    return diff;
}

void print(Budget m)
{
    const int EXPCAT = 10;
    for (int i =0; i <EXPCAT; i++)
    {
        cout << m.ctgrs[i] <<" " <<m.status[i] << endl;
    }
    cout << fixed << setprecision(2);
    cout << "You were $" << m.total <<" "<< m.status[10] << " budget" ; 
}

