/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap12_Prob7_SentenceFilter.cpp
 * Author: Gabrielle
 *
 * Created on July 12, 2020, 7:50 PM
 */

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

/*
 * Write a program that asks the user for two file names. The first file will be 
 * opened for input and the second file will be opened for output. (It will be 
 * assumed that the first file contains sentences that end with a period.) The 
 * program will read the contents of the first file and change all the letters 
 * to lowercase except the first letter of each sentence, which should be made
 * uppercase. The revised contents should be stored in the second file.
 */
int main(int argc, char** argv) {

    ifstream in;
    ofstream out;
    in.open("Upper.txt");
    out.open("Right.txt");
    char letter = ' ';
    
    if (in)
    {
        while (!in.eof())
        {
            in.get(letter);
            if (letter == ' ')
            {
                in.get(letter);
                letter = toupper(letter);
                out.put(letter);
                cout << letter;
            }
            else
            {
                letter = toupper(letter);
                out.put(letter);
                cout << letter;
            }
            in.get(letter);
            while (letter != '.')
            {
                letter = tolower(letter);
                out.put(letter);
                cout << letter;
                in.get(letter);
            }
            out.put(letter);
            cout << letter << endl;
            out.put(' ');
            cout << ' ';
        }
    }
    else
    {
        cout << "Error in opening file." << endl;
    }
    
    in.close();
    out.close();
    
    return 0;
}

