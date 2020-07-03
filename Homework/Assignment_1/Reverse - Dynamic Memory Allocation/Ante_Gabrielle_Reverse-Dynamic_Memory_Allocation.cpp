/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Reverse-Dynamic_Memory_Allocation.cpp
 * Author: Gabrielle
 *
 * Created on July 2, 2020, 10:57 PM
 */

#include <iostream>

using namespace std;

/*
 * Read in a dynamic array.
 * Output the reverse sorted dynamic array by first sorting from smallest to 
 *  largest.
 * Use the following functional prototypes.
 * int *getData(int &);               //Fill the array
 * int *sort(const int *,int)         //Sort smallest to largest
 * int *reverse(const int *,int);  //Sort in reverse order
 * void prntDat(const int *,int); //Print the array
 */
int *getData(int &);               //Fill the array
int *sort(const int *,int);         //Sort smallest to largest
int *reverse(const int *,int);  //Sort in reverse order
void prntDat(const int *,int); //Print the array
int main(int argc, char** argv) {
	//your code here
	int size = 0;
    int *ary = getData(size);
	// smallest to largest
	int *stl = sort(ary, size);
	int *lts = reverse(stl,size);
	prntDat(stl,size);
	cout << endl;
	prntDat(lts, size);
	
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

int *sort(const int *array,int size)
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
    return ary;
}

int *reverse(const int *array,int size)
{
    int *ary = new int [size];
    for (int i = 0; i <size; i++)
    {
        *(ary+i) = *(array+i);
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(*(ary+i)<*(ary+j))
            {
                //Swap in place
                *(ary+i)=*(ary+i)^*(ary+j);
                *(ary+j)=*(ary+i)^*(ary+j);
                *(ary+i)=*(ary+i)^*(ary+j);
            }
        }
    }
    return ary;
}

void prntDat(const int *array,int size)
{
 for (int i = 0; i <size-1;i++){
        cout << *(array+i) << " ";
    }
    cout << *(array+(size-1));
}

