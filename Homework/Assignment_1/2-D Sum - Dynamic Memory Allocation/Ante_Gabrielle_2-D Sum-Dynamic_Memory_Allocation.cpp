/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_2-D Sum-Dynamic_Memory_Allocation.cpp
 * Author: Gabrielle
 *
 * Created on July 3, 2020, 2:22 PM
 */

#include <iostream>

using namespace std;

/*
 * Total the elements in a 2-D Array.  Create the following functions to 
 *      perform this task.
 * int **getData(int &,int &);        //Return the 2-D array and its size.
 * void prntDat(const int* const *,int,int);//Print the 2-D Array
 * void destroy(int **,int,int);       //Deallocate memory
 * int sum(const int * const *, int,int);    //Return the Sum
 */

int **getData(int &,int &);        //Return the 2-D array and its size.
void prntDat(const int* const *,int,int);//Print the 2-D Array
void destroy(int **,int,int);       //Deallocate memory
int sum(const int * const *, int,int);    //Return the Sum

int main(int argc, char** argv) {
    //your code here
    int row = 0, col = 0, total = 0;
    int **ary = getData(row,col);
    prntDat(ary,row,col);
    total = sum(ary,row,col);
    cout << total;
    destroy(ary,row,col);
    
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

void prntDat(const int* const * ary,int row,int col)
{
     for (int i = 0; i <row;i++){
        for (int j = 0; j <col-1;j++){
           cout << *(*(ary+i)+j) << " ";
        }
         cout << *(*(ary+i)+(col-1));
        cout << endl;
    }
}

void destroy(int **ary,int row,int col)
{
      for (int i = 0; i <row;i++){
        delete[] *(ary+i);
      }
      delete[] ary;
}


int sum(const int * const *ary, int row,int col)
{
    int total = 0;
    for (int i = 0; i <row;i++){
        for (int j = 0; j <col;j++){
           total+= *(*(ary+i)+j);
        }
    }
    
    return total;
}
