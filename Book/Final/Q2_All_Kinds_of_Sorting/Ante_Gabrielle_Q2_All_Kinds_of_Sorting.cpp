/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Q2_All_Kinds_of_Sorting.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 7:11 PM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <regex>   
#include "Prob2Sort.h"

using namespace std;

/*
 * Sort a single column array and/or sort a 2 dimensional array 
 * of characters given any column.  Here is what I used as my
 * template specification.
 * Driver program for the above class.  Create your own file to read.
 * The output from this problem.
 * 
 * The start of Problem 2, the sorting problem
 * Lbekoeddhoffbmg
 * Lkcmggjcdhhglif
 * Cgldjhcekjigcdd
 * Cgldjhcekjigcdp
 * Bffmdbkcenlafjk
 * Fggdijijegfblln
 * Jjlncnimjldfedj
 * Amliglfohajcdmn
 * Balgfcaelhfkgea
 * Kmlhmhcddfoeilb

 * Sorting on column 15
 * Cgldjhcekjigcdp
 * Fggdijijegfblln
 * Amliglfohajcdmn
 * Bffmdbkcenlafjk
 * Jjlncnimjldfedj
 * Lbekoeddhoffbmg
 * Lkcmggjcdhhglif
 * Cgldjhcekjigcdd
 * Kmlhmhcddfoeilb
 * Balgfcaelhfkgea
 */
int main(int argc, char** argv) {
    cout << "Extra Credit: Utilize regular expressions on all problems requiring inputs. [ => in main, when asking for which column to sort]" << endl << endl;
    cout<<"The start of Problem 2, the sorting problem"<<endl;
    Prob2Sort<char> rc;
    //bool ascending=true;
    bool ascending=false;
    ifstream infile;
    infile.open("Problem2.txt",ios::in);
    char *ch2=new char[10*16];
    char *ch2p=ch2;
    while(infile.get(*ch2)){cout<<*ch2;ch2++;}
    infile.close();
    cout<<endl;
    
    regex num("^[+]?([1-9]|1[0-5])$"); //added  // LOOK OVER HERE
    string col;  //added
    int column; //moved up
    
    do{ // do while added
    cout<<"Sorting on which column"<<endl;
    //cin>>column;
    cin>>col;       //modified
    } while (!regex_match(col,num));
    istringstream(col)>>column; //added
    char *zc=rc.sortArray(ch2p,10,16,column,ascending);
    for(int i=0;i<10;i++)
    {
            for(int j=0;j<16;j++)
            {
                    cout<<zc[i*16+j];
            }
    }
    delete []zc;
    cout<<endl;
    return 0;
}

