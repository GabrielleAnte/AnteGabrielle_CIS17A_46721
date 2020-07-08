/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Structure_Drink_Machine_Simulator.cpp
 * Author: Gabrielle
 *
 * Created on July 7, 2020, 7:49 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * Write a program that simulates a soft drink machine. The program should use 
 *      a structure
 * that stores the following data:
 * Drink Name
 * Drink Cost
 * Number of Drinks in Machine
 * The program should create an array of five structures. The elements should be 
 *      initialized
 * with the following data:
 * Drink Name - Cost - Number in Machine
 * Cola .75 20
 * Root Beer .75 20
 * Lemon-Lime .75 20
 * Grape Soda .80 20
 * Cream Soda .80 20
 * Each time the program runs, it should enter a loop that performs the following
 * steps: A list of drinks is displayed on the screen. The user should be allowed to
 * either quit the program or pick a drink. If the user selects a drink, he or she will
 * next enter the amount of money that is to be inserted into the drink machine. The
 * program should display the amount of change that would be returned and subtract
 * one from the number of that drink left in the machine. If the user selects a drink that
 * has sold out, a message should be displayed. The loop then repeats. When the user
 * chooses to quit the program it should display the total amount of money the
 * machine earned.
 * Input Validation: When the user enters an amount of money, do not accept negative
 * values, or values greater than $1.00.
 */

struct SDM
{
    string name[5];
    float cost[5];
    int nDrks[5];
};

int main(int argc, char** argv) {
 const int NUMDK =5;
    SDM drink;
    string name[NUMDK] = {"Cola", "Root Beer", "Lemon-Lime", "Grape Soda", "Cream Soda"};
    int price[NUMDK] = {75,75,75,80,80};
    string choice = " ";
    int insert = 0, change = 0, profit = 0;
    for (int i = 0; i < NUMDK; i++)
    {
        drink.name[i] =name[i];
        drink.cost[i] = price[i];
        drink.nDrks[i] = 20;
	}
	do {
    	for (int i = 0; i < NUMDK; i++)
        {
    	    cout << left <<setw(10) << drink.name[i];
    	    cout << right <<setw(3) << drink.cost[i];
    	    cout << right <<setw(4) << drink.nDrks[i] << endl;
        }
        cout << "Quit" << endl;
        getline(cin,choice);
        
        for (int i = 0; i < 5; i++)
        {
            if (choice == drink.name[i])
            {
                do {
                cin >> insert;
                cin.ignore();
                } while (insert <0 || insert > 100);
                drink.nDrks[i]-=1;
                if (drink.nDrks[i] <0)
                {
                    cout << "Item Sold Out" << endl;
                }
                else
                {
                    change = insert - drink.cost[i];
                    profit += drink.cost[i];
                    cout << change << endl;
                }
            }
        }
	} while (choice != "Quit");
	cout << profit << endl;
    return 0;
}

