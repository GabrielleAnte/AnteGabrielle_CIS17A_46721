/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_A8_Search_an_array_for_a_value._15pts..cpp
 * Author: Gabrielle
 *
 * Created on July 5, 2020, 1:48 AM
 */

//System Libraries Here
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()

using namespace std;

/*
 * Task -> Implement the function specifications, i.e. the prototypes.
 * Search a sentence for the occurrence of a pattern.  Report the position 
 *      where the pattern occurs.  It might not occur, occur only once, or 
 *      could occur many times.  Find all the matches and output their position 
 *      in the sentence.  The position starts at index=0 at the beginning of the 
 *      sentence.
 * See the sample test case for input and output formats.
 */

int  srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const char [],const char [],int []);//Search for all occurrences
void print(const char []);//Print the character arrays
void print(const int []); //Print the array of indexes where the pattern found

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    char sntnce[LINE],pattern[LINE]; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    cin.getline(sntnce,LINE);
    cout<<"Input a pattern."<<endl;
    cin.getline(pattern,LINE);
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    srchAll(sntnce,pattern,match);
    
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    print(sntnce);
    print(pattern);
    cout<<"The positions where the pattern matched"<<endl;
    print(match);
    
    //Exit
    return 0;
}

int srch1(const char array[], const char pattern[],int size)
{
    static int j = 0;
   int position = -1;
    bool found = false;
   int length = strlen(pattern);
    
   for (int i = 0; i < length; i++)
    {
       while (j < size && !found)
        {
            if (array[j]==pattern[i])
            {
                found = true;
                position = j;
            }
            j++;
        }
    }
    
    return position;
}

void srchAll(const char array[],const char pattern[],int match[])
{
    int size = strlen(array);
    int position = -1, i = 0;
    do
    {
        position = srch1(array,pattern,size);
        match[i] = position;
        i++;
    }
    while (position != -1);
}

void print(const char array[])
{
    int i = 0;
    while (array[i]!='\0')
    {
        cout <<array[i];
        i++;
    }
    cout << endl;
}

void print(const int match[])
{
    int i = 0;
    if (match[0]==-1)
    {
        cout << "None"<< endl;
    }
    else
    {
        while (match[i]!= -1)
        {
            cout << match[i] << endl;
            i++;
        }
    }
}