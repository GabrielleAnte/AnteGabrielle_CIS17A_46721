/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap11_Prob9_SpeakersBureau.cpp
 * Author: Gabrielle
 *
 * Created on July 8, 2020, 1:34 AM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * Write a program that keeps track of a speaker's bureau. The program should 
 *      use a structure to store the following data about a speaker:
 * Name
 * Telephone Number
 * Speaker Topic
 * Fee Required
 * The program should use an array of at least 10 structures. It should let the 
 *      user enter data into the array, change the contents of any element, and 
 *      display all the data stored in the array. The program should have a 
 *      menu-driven user interface.
 * Input Validation: When the data for a new speaker is entered, be sure the 
 *      user enters data for all the fields. No negative amounts should be 
 *      entered for a speaker's fee.
 */

struct Speaker {
    string name;
    int telnum;
    string spkTpc;
    float fee;
};
int main(int argc, char** argv) {
    const int NUM_SPK = 10;
    Speaker s[NUM_SPK];
    int choice = 0;

    //initialize
    for (int i = 0; i < NUM_SPK; i++)
    {
        s[i].name = " ";
        s[i].telnum = 0;
        s[i].spkTpc = " ";
        s[i].fee = 0;

    }

    cout << "1. Enter data" << endl;
    cout << "2. Modify Data" << endl;
    cout << "3. Display Data" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();
    cout << endl;
  

    switch (choice)
    {
    case 1:
    {
        cout << "Enter Data" << endl << endl;
        for (int i = 0; i < NUM_SPK; i++)
        {
            cout << "For Speaker number " << i + 1 << "..." << endl;
            cout << "Name: ";
            getline(cin, s[i].name);
            cout << "Telephone Number: ";
            cin >> s[i].telnum;
            cin.ignore();
            cout << "Speaker Topic: ";
            getline(cin, s[i].spkTpc);
            do {
                cout << "Fee Required: $";
                cin >> s[i].fee;
            } while (s[i].fee < 0);
            cin.ignore();
        }
        break;
    }
    case 2:
    {
        int num = 0;
        cout << "Modify data" << endl << endl;
        cout << "Input speaker number: ";
        cin >> num;
        cin.ignore();

        cout << "For Speaker number " << num << "..." << endl;
        cout << "Name: ";
        getline(cin, s[num-1].name);
        cout << "Telephone Number: ";
        cin >> s[num-1].telnum;
        cin.ignore();
        cout << "Speaker Topic: ";
        getline(cin, s[num-1].spkTpc);
        do {
            cout << "Fee Required: $";
            cin >> s[num-1].fee;
        } while (s[num-1].fee < 0);
        cin.ignore();
        break;
    }
    case 3:
    {
        cout << "Display data" << endl << endl;
        for (int i = 0; i < NUM_SPK; i++)
        {
            cout << "For Speaker number " << i+1 << "..." << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "Telephone Number: " << s[i].telnum << endl;
            cout << "Speaker Topic: " << s[i].spkTpc << endl;
            cout << fixed << setprecision(2);
            cout << "Fee Required: $" << s[i].fee << endl << endl;

        }
    }
    case 4:
    {
        cout << "You have chosen to exit the program." << endl;
        break;
    }
    return 0;
}

