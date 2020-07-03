/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Median-Dynamic_Memory_Allocation.cpp
 * Author: Gabrielle
 *
 * Created on July 2, 2020, 10:49 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Calculate the Median by creating a dynamic float array 2 larger in size than
 *  the dynamic integer array.
 * If you don't know how to calculate the median, google it.
 * Output the results with 2 decimal places.
 * Create the following functions and use them, here are the prototypes
 * int *getData(int &);         //Return the array size and the array
 * void prntDat(int *,int);    //Print the integer array
 * float *median(int *,int);  //Fill the median Array with the Float array size,
 *   the median, and the integer array data
 * void prntMed(float *);     //Print the median Array
 */
int *getData(int &);         //Return the array size and the array
void prntDat(int *,int);    //Print the integer array
float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data
void prntMed(float *);     //Print the median Array

int main(int argc, char** argv) {
	//your code 
	int size = 0;
	int *ary = getData(size);
	prntDat(ary,size);
	float *med = median(ary, size);
	prntMed(med);
    return 0;
}

int *getData(int &size)
{
    size = 0;
    
    cin >> size;
    int*ary= new int[size];
    for (int i = 0; i <size;i++){
        cin >> *(ary+i);
    }
    return ary;
}

void prntDat(int *array, int size)
{
    for (int i = 0; i <size-1;i++){
        cout << *(array+i) << " ";
    }
    cout << *(array+ (size-1)) << endl;
}

float *median(int *array, int size)
{
    int *ary = new int [size];
    for (int i = 0; i <size;i++)
    {
        *(ary+i) = *(array+i);
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(*(ary+i)>*(ary+j))
            {
                //Swap in place
                *(ary+i)=*(ary+i)^*(ary+j);
                *(ary+j)=*(ary+i)^*(ary+j);
                *(ary+i)=*(ary+i)^*(ary+j);
            }
        }
    }

    float *med = new float [size+2];
    int index = (size/2);
    *(med+0) = size+2;
    if ( size%2 !=0) //if size is odd
    {
        *(med+1)=*(ary+index);
    }
    else // if even
    {
        *(med+1)=static_cast<float>(*(ary+index)+*(ary+(index-1)))/2;   
    }
    for (int i = 0; i <size;i++)
    {
        *(med+(i+2)) = *(array+i);
    }
    
    return med;
}

void prntMed(float *array)
{
    int size = *(array+0);
    cout << *(array+0) << " ";
    cout << fixed << setprecision(2);
    for (int i = 1; i <size-1;i++)
    {
        cout << *(array+i) << " ";
    }
    cout << *(array+(size-1));
    
}



