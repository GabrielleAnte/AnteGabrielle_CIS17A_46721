/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap12_Prob1_FileHeadProgram.cpp
 * Author: Gabrielle
 *
 * Created on July 12, 2020, 7:05 PM
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * Write a program that asks the user for the name of a file. The program should 
 * display the first ten lines of the the file on the screen (the "head" of the
 * file). If the file has fewer than ten lines, the entire file should be 
 * displayed, with a message indicating the entire file has been displayed.
 */
int main(int argc, char** argv) {

    ifstream in;
    string name = " ";
    string line = " ";
    int count = 0;
    
    cout << "Enter the file name: ";
    getline(cin,name);
    
    in.open(name.c_str());
    
    while(!in.eof()){
        getline(in,line);
        count++;
        if (count <=10)
        {
            cout << line << endl;
        }
    }
    
    if (count <=10)
    {
        cout << endl << "The entire contents were displayed." << endl;
    }
   
    in.close();
    
    return 0;
}

