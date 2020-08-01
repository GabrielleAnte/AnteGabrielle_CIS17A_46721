/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prob1Random.h
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 8:10 PM
 */

#ifndef PROB1RANDOM_H
#define PROB1RANDOM_H

#include <cstdlib>              //.cpp removed from program
#include <ctime>            
using namespace std;

template <class T>
class Prob1Random
{
    private:
            //char *set;      //The set of numbers to draw random numbers from
            T *set;                 //LOOK OVER HERE
            char  nset;     //The number of variables in the sequence
            int  *freq;     //Frequency of all the random numbers returned
            int   numRand;  //The total number of times the random number function is called
    public:
            //Prob1Random(const char,const char *);     //Constructor
            Prob1Random(const char,const T *);
            ~Prob1Random(void);                       //Destructor  
            char randFromSet(void);                   //Returns a random number from the set
            int *getFreq(void) const;                 //Returns the frequency histogram
            //char *getSet(void) const;                 //Returns the set used
            T *getSet(void) const;          //LOOK OVER HERE
            int getNumRand(void) const;               //Gets the number of times randFromSet has
                                                      //been called
};

template <class T>
Prob1Random<T>::Prob1Random(const char a,const T *b)     //Constructor
 {
    set = new char [a];         //The set of numbers to draw random numbers from
    nset = a;                   //The number of variables in the sequence
    freq = new int [a];         //Frequency of all the random numbers returned
    numRand = 0;                //The total number of times the random number function is called
    
    for(int i = 0; i < nset; i++)
    {
        set[i] = b[i];      
        freq[i] = 0;  
    }
 }

template <class T>
Prob1Random<T>::~Prob1Random(void)                       //Destructor
 {
     delete []set;
     delete []freq;
 }

template <class T>
char Prob1Random<T>::randFromSet(void)                   //Returns a random number from the set
{
    int i=0;                                          // index of the set array
    i=rand()%nset;
    numRand++;                                        // number of times function is called
    freq[i]++;                                        // count frequency
    
    return set[i];
}

template <class T>
int* Prob1Random<T>::getFreq(void) const                 //Returns the frequency histogram
{
    return freq;
}

template <class T>
T* Prob1Random<T>::getSet(void) const                 //Returns the set used
{
    return set;
}

template <class T>
int Prob1Random<T>::getNumRand(void) const               //Gets the number of times randFromSet has
{                                                     //been called
    return numRand;
}

#endif /* PROB1RANDOM_H */

