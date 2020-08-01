/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Q1_Random_Sequence.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 7:10 PM
 */

#include <iostream>
#include <ctime>
#include "Prob1Random.h"

using namespace std;

/*
 * Create a class that
 * returns a random number from the following set,
 * {18,33,56,79,126}.  Loop 100,000 times with this 
 * procedure and print the frequency of each of the 
 * 5 numbers obtained.  The following is the 
 * specification for the class.==
 * Driver program to return a random sequence
 * 	
 * Sample Output
 * 
 * 18 occured 20045 times
 * 33 occured 19952 times
 * 56 occured 20035 times
 * 79 occured 20039 times
 * 125 occured 19929 times
 * The total number of random numbers is 100000
 * 
 * Note:  Your results are not expected to be exactly the
 * same!  After all these are pseudo-random number sequences
 * with different seeds.
 */

int main(int argc, char** argv) {

    cout << "Extra Credit: Convert Problem 1 by using templates in place of the character arrays. [=> in Prob1Random.h]" << endl << endl; 
    srand(time(0));
    char n=5;
    char rndseq[]={18,33,56,79,126};
    int ntimes=100000;
    Prob1Random <char>a(n,rndseq);
    for(int i=1;i<=ntimes;i++)
    {
            a.randFromSet();
    }
    int *x=a.getFreq();
    char *y=a.getSet();
    for(int i=0;i<n;i++)
    {
            cout<<int(y[i])<<" occured "<<x[i]<<" times"<<endl;
    }
    cout<<"The total number of random numbers is "<<a.getNumRand()<<endl;

    return 0;
}

