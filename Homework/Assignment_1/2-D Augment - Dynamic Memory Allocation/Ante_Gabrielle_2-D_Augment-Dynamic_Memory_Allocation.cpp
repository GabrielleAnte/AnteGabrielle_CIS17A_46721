/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_2-D_Augment-Dynamic_Memory_Allocation.cpp
 * Author: Gabrielle
 *
 * Created on July 3, 2020, 3:10 PM
 */

#include <iostream>

using namespace std;

/*
 * Create a 2-D array 1 row and 1 column larger than the array to copy with 
 *      0's in the 1st row and column but filled with the other rows and columns
 *      using the original array.
 * Create the following prototypes and implement.
 * int **getData(int &,int &);//Get the Matrix Data
 * void printDat(const int * const *,int,int);//Print the Matrix
 * int **augment(const int * const *,int,int);//Augment the original array
 * void destroy(int **,int);//Destroy the Matrix, i.e., reallocate memory
 */

int **getData(int &,int &);//Get the Matrix Data
void printDat(const int * const *,int,int);//Print the Matrix
int **augment(const int * const *,int,int);//Augment the original array
void destroy(int **,int);//Destroy the Matrix, i.e., reallocate memory

int main(int argc, char** argv) {
    //your code here
    int row = 0, col = 0, total = 0;
    int **ary = getData(row,col);
    int **aug = augment(ary,row,col);
    printDat(ary,row,col);
    cout << endl;
    printDat(aug,row+1,col+1);
    destroy(ary,row);
    
    return 0;
}

int **getData(int &row,int &col)
{
    row = 0;
    col = 0;
    
    cin >> row;
    cin >> col;
    int**ary= new int*[row];
    for (int i = 0; i <row;i++){
      *(ary+i) = new int [col];
    }
    for (int i = 0; i <row;i++){
        for (int j = 0; j <col;j++){
           cin >> *(*(ary+i)+j);
        }
    }
    return ary;
} 

int **augment(const int * const *array,int row,int col)
{
     int**ary= new int*[row+1];
    for (int i = 0; i <row+1;i++){
      *(ary+i) = new int [col+1];
    }
     // for each 1st element along row
    for (int i = 0; i <row+1;i++){
      *(*(ary+i)+0) =0;
    }
    // for each 1st element along column
    for (int i = 0; i <col+1;i++){
      *(*(ary+0)+i) =0;
    }
    
    for (int i = 0; i <row;i++){
        for (int j = 0; j <col;j++){
            *(*(ary+i+1)+(j+1)) = *(*(array+i)+j);
        }
    }
    return ary;
}
void printDat(const int* const * ary,int row,int col)
{
    for (int i = 0; i <row;i++){
        for (int j = 0; j <col-1;j++){
           cout << *(*(ary+i)+j) << " ";
        }
        cout << *(*(ary+i)+(col-1));
        if(i != row-1){
        cout << endl;
        }
    }
}

void destroy(int **ary,int row)
{
      for (int i = 0; i <row;i++){
        delete[] *(ary+i);
      }
      delete[] ary;
}

