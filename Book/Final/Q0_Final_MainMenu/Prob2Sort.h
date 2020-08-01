/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prob2Sort.h
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 9:03 PM
 */

#ifndef PROB2SORT_H
#define PROB2SORT_H

#include <iostream>
using namespace std;

//This class sorts arrays either ascending or descending
template<class T>
class Prob2Sort
{
	private:
		int *index;                                 //Index that is utilized in the sort
	public:
		Prob2Sort(){index=NULL;};                   //Constructor
		~Prob2Sort(){delete []index;};              //Destructor
		T * sortArray(const T*,int,bool);           //Sorts a single column array
		T * sortArray(const T*,int,int,int,bool);   //Sorts a 2 dimensional array represented as a 1 dim array
}; 

template <class T>
T* Prob2Sort<T>::sortArray(const T* a,int r,bool asc)           //Sorts a single column array
{
    T *ary = new T [r];
     for (int i = 0; i < r; i++) {
            *(ary+i) =  *(a+i);
    }
    T temp[r];
    if (asc)
    { 
        for (int i = 0; i < r - 1; i++) {

            for (int j = i + 1; j < r; j++) {

                if (ary[i]>ary[j]){
                  temp=ary[i];
                  ary[i]= ary[j];
                  ary[j]= temp;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < r - 1; i++) {

            for (int j = i + 1; j < r; j++) {

                if (ary[i]<ary[j]){
                  temp=ary[i];
                  ary[i]= ary[j];
                  ary[j]= temp;
                }
            }
        }
    }
    return ary;
}

template <class T>
T* Prob2Sort<T>::sortArray(const T* a,int r,int c,int onCol,bool asc)   //Sorts a 2 dimensional array represented as a 1 dim array
{
    T **ary = new T *[r];
    for (int i = 0; i < r; i++) {
            *(ary + i) = new T [c];
    }
    int index=0;
    for (int i = 0; i < r; i++) 
    {
        for (int j=0; j < c;j++){
            if (a[index]!=13&&a[index]!='\n'&&j<c-1)
            {
                ary[i][j]=a[index];
            }
            else{
                index++;
                ary[i][j]=a[index];
            }
            index++;
        }
    }
    
    ary[r-1][c-1]= '\n';
    
    T *temp = new T[c];
    if (asc)
    { 
        for (int i = 0; i < r - 1; i++) {
            for (int j = i + 1; j < r; j++) {
                if (ary[i][onCol-1]>ary[j][onCol-1]){
                    for (int k=0;k<c;k++){
                      temp[i]=ary[i][k];
                      ary[i][k]= ary[j][k];
                      ary[j][k]= temp[i];
                    }
                }
            }
        }
    }
    else
    {                                
        for (int i = 0; i < r - 1; i++) {
            for (int j = i + 1; j < r; j++) {
                if (ary[i][onCol-1]<ary[j][onCol-1]){
                    for (int k=0;k<c;k++){
                      temp[i]=ary[i][k];
                      ary[i][k]= ary[j][k];
                      ary[j][k]= temp[i];
                    }
                }
            }
        }
    }
    T *ar = new T [r*c];    
    for (int i = 0; i < r; i++) {
         for (int j=0; j < c;j++){
            *(ar+((c*i)+j))=*(*(ary+i)+j);
        }
    }
   
   
   
    for (int i = 0; i < r; i++) {
        delete[] *(ary + i);
    }
    
    delete []ary;
    delete temp;
    return ar;
}

#endif /* PROB2SORT_H */

