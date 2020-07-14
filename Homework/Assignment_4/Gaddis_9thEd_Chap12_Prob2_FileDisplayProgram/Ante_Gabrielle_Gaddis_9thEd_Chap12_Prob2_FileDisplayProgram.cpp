/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap12_Prob2_FileDisplayProgram.cpp
 * Author: Gabrielle
 *
 * Created on July 12, 2020, 11:25 PM
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * Write a program that asks the user for the name of a file. The program should
 * display the contents of the file on the screen. If the file’s content won’t 
 * fit on a single screen, the program should display 24 lines of output at a 
 * time, then pause. Each time the program pauses, it should wait for the user
 * to strike a key before the next 24 lines are displayed.
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
        cout << "Line "<< count << ": "<< line << endl;
        if (count >= 24)
        {
           count = 0;
           cout << endl <<"Press any key to continue" <<endl;
           cin.get();
        }
    }
    cout << endl << "End of text" << endl;
    in.close();

    return 0;
}

