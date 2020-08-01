/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prob3Table.h
 * Author: Gabrielle
 *
 * Created on July 28, 2020, 4:00 PM
 */

#ifndef PROB3TABLE_H
#define PROB3TABLE_H

#include <iostream>
#include <fstream>
using namespace std;

template<class T>
class Prob3Table
{
	protected:
		int rows;                                 //Number of rows in the table
		int cols;                                 //Number of cols in the table
		T *rowSum;                                //RowSum array
		T *colSum;                                //ColSum array
		T *table;                                 //Table array
		T grandTotal;                             //Grand total
		void calcTable(void);                     //Calculate all the sums
	public:
		Prob3Table(char *,int,int);               //Constructor then Destructor
                Prob3Table(char *);                       //added
                Prob3Table();                             //added;
		~Prob3Table(){delete [] table;delete [] rowSum;delete [] colSum;};
		const T *getTable(void){return table;};
		const T *getRowSum(void){return rowSum;};
		const T *getColSum(void){return colSum;};
		T getGrandTotal(void){return grandTotal;};
};

template <class T>
Prob3Table<T>::Prob3Table(char *name,int r,int c){
    ifstream in(name);
    T temp;
    int index = 0;
    rows=r;
    cols=c;
    rowSum = new T[r];
    colSum = new T[c];
    table = new T[(r)*(c)];
    grandTotal = 0;
    
    while(in>>temp)
    {
        table[index]=temp;
        index++;
    }
}

template <class T>
Prob3Table<T>::Prob3Table(char *name){      //added
    ifstream in;
    in.open(name, ios::in|ios::out);
    T temp;
    int index = 0, i =0, j = 0;
    int r=0, c=50;
    char read;
    
    while(in.get(read))
    {
        if (read == ' ')
        { 
            j++;
        }
        else if (read=='\n'|| read==13)
        {
            if (read==13)
            {
                in.get(); //after carriage return is line feed
            }
            i++;
            j++;
            if (j<c){c=j;}
            j=0;
        }
    }
    
    rows=i;
    cols=c;
    rowSum = new T[rows];
    colSum = new T[cols];
    table = new T[(rows)*(cols)];
    grandTotal = 0;
    
    in.clear();
    in.seekg(0,ios::beg);
    while(in>>temp)
    {
        table[index]=temp;
        index++;
    }
    
    for(int i=0;i<rows;i++)
    {
            for(int j=0;j<cols;j++)
            {
                    cout<<table[i*cols+j]<<" ";
            }
            cout<<endl;
    }
    cout << endl << endl;

    in.close();
}

template <class T>
Prob3Table<T>::Prob3Table()     //added
{
    rows=0;
    cols=0;
    grandTotal=0;
    rowSum=0;
    colSum=0;
    table = 0;
}

template <class T>
void Prob3Table<T>::calcTable(void)
{
    int index = 0;
    for (int i=0;i <rows;i++)
    { rowSum[i]=0;}
    for (int i=0;i <cols;i++)
    { colSum[i]=0;}
      
    for (int i=0;i <rows;i++)
    {
        for (int j = 0; j < cols; j++)
        {
            grandTotal+=table[index];
            if (index%cols==j){
                colSum[j]+=table[index];
            }
            index++;
        }
    }  

    index=0;
     for (int i=0;i < rows;i++)
    {
        for (int j = 0; j < cols; j++)
        {
            rowSum[i]+=table[index];
            index++;
        }
    }  
}

#endif /* PROB3TABLE_H */

