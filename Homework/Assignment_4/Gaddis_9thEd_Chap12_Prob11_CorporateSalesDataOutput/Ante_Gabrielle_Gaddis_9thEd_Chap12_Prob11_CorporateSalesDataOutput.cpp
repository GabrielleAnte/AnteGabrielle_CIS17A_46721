/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap12_Prob11_CorporateSalesDataOutput.cpp
 * Author: Gabrielle
 *
 * Created on July 12, 2020, 7:52 PM
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
 * Write a program that uses a structure to store the following data on a company division:
 * 
 * Division Name(such as East, West, North, or South)
 * Quarter(1,2,3,or 4)
 * Quarterly Sales
 * 
 * The user should be asked for the four quarters' sales figures for the East, 
 * West, North, and South divisions. The data for each quarter for each division 
 * should be written to a file.
 * 
 * Input Validation: Do not accept negative numbers for any sales figures.
 */
struct Div {
    string name;
    int quarter[4];
    float qsales[4];
};

int main(int argc, char** argv) {

    Div *d;
    int numdiv = 0;
    ofstream out;
    out.open("data.txt");
    
    cout << "Number of divisions: ";
    cin >> numdiv;
    d = new Div [numdiv];
    for (int i = 0; i < numdiv; i++)
    {
        cin.ignore();
        for (int j= 0; j < 4; j++)
        {
            d[i].quarter[j] = j+1;
            d[i].qsales[j] = 0.00;
        }
        cout << "Enter Division Name:" << endl;
        getline(cin,d[i].name);
        cout << "Enter first-quarter sales:" << endl;
        cin >> d[i].qsales[0];
        cout << "Enter second-quarter sales:" << endl;
        cin >> d[i].qsales[1];
        cout << "Enter third-quarter sales:" << endl;
        cin >> d[i].qsales[2];
        cout << "Enter fourth-quarter sales:" << endl;
        cin >> d[i].qsales[3];
        cout << endl;
    }
    
     for (int i = 0; i < numdiv; i++)
    {
        out << "Division Name: ";
        cout << "Division Name: ";
        out << d[i].name << endl;
        cout << d[i].name << endl;
        for (int j = 0; j < 4; j++)
        {
            out << "For Quarter " ;
            out << d[i].quarter[j];
            out << " sales: ";
            cout << "For Quarter " << d[i].quarter[j] << " sales: ";
            out << d[i].qsales[j] << endl;
            cout << d[i].qsales[j] << endl;
        }
        out << endl;
        cout << endl;
    }
    
    delete []d;
    
    out.close();
    
    //Exit stage right!
    return 0;
}

