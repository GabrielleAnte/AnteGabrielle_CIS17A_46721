/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_A5_Find_the_Max,_Min,_and_Sum_of_an_integer_array._10pts.cpp
 * Author: Gabrielle
 *
 * Created on July 3, 2020, 9:15 PM
 */

#include <iostream>//cin,cout

using namespace std;

/*
 * Task -> Always the same for each problem.  Take the driver program.  Write 
 *  the functions specified in the prototype.  
 * 
 * Purpose:  Input the size and elements of an integer array.  Calculate the 
 *  sum and find the min then the max.  Output the results.
 
 * Refer to sample test case for the result.
 
 * This is the easiest problem on the test.  I would start with this one! 
 */

//Function Prototypes Here
void read(int [],int);
int  stat(const int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
 //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}

void read(int array[],int size)
{
    for (int i = 0 ; i < size; i++)
    {
        cin >> array[i];
    }
}

int  stat(const int array[],int size,int &max,int &min)
{
    int sum = 0;
    max = 0;
    min = array[0];
    
    for (int i = 0 ; i < size; i++)
    {
        sum+=array[i];
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    
    return sum;
}

void print(const int array[],int size,int sum,int max,int min)
{
     for (int i = 0 ; i < size; i++)
    {
        cout << "a["<<i<< "] = " << array[i]<<endl;
    }
    cout <<"Min  = "<< min<< endl;
    cout <<"Max  = "<< max<< endl;
    cout <<"Sum  = "<< sum<< endl;
}