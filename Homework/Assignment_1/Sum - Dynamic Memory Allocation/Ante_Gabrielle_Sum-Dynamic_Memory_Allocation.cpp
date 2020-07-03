/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Sum-Dynamic_Memory_Allocation.cpp
 * Author: Gabrielle
 *
 * Created on July 2, 2020, 11:22 PM
 */

#include <iostream>

using namespace std;

/*
 * Given an array.
 * Create a parallel array that represents the successive sum of preceding 
 *      members in the array.
 * Use the following prototypes
 * int *getData(int &);             //Return the array size and the array from
 *      the inputs
 * int *sumAry(const int *,int);//Return the array with successive sums
 * void prntAry(const int *,int);//Print the array
 */

int *getData(int &);             //Return the array size and the array from the
                                 // inputs
int *sumAry(const int *,int);//Return the array with successive sums
void prntAry(const int *,int);//Print the array

int main(int argc, char** argv) {
	//your code here
	int size = 0;
	int *array = getData(size);
	int *sum = sumAry(array, size);
	prntAry(array,size);
	cout <<endl;
	prntAry(sum,size);

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

int *sumAry(const int *array,int size)
{
    int *sum = new int [size];
   *(sum+0) = *(array+0);
    for (int i = 0; i < size-1; i++)
    {
        *(sum+(i+1))= *(array+(i+1))+*(sum+i);
    }
    return sum;
}

void prntAry(const int *array,int size)
{
    for (int i = 0; i <size-1;i++){
        cout << *(array+i) << " ";
    }
    cout << *(array+(size-1));
}

