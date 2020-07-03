/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_1-D_Augment-Dynamic_Memory_Allocation.cpp
 * Author: Gabrielle
 *
 * Created on July 3, 2020, 2:36 PM
 */

#include <iostream>

using namespace std;

/*
 * Augment a 1-D array by 1 Element, place 0 in the first element and copy the
 *   rest from the original shifted by 1 index.
 * int *getData(int &);//Read the array
 * int *augment(const int *,int);//Augment and copy the original array
 * void prntAry(const int *,int);//Print the array 
 */

int *getData(int &);//Read the array
int *augment(const int *,int);//Augment and copy the original array
void prntAry(const int *,int);//Print the array

int main(int argc, char** argv) {
    //your code here
    int size = 0;
    int *array = getData(size);
    int *aug = augment(array,size);
    prntAry(array,size);
    cout << endl;
    prntAry(aug,size+1);
    
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

int *augment(const int *array,int size)
{
     int *ary = new int [size+1];
    *(ary+0) = 0;
    for (int i = 0; i <size;i++)
    {
        *(ary+(i+1)) = *(array+i);
    }
    return ary;
}

void prntAry(const int *array,int size)
{
    for (int i = 0; i <size-1;i++){
        cout << *(array+i) << " ";
    }
    cout << *(array+(size-1));
}
