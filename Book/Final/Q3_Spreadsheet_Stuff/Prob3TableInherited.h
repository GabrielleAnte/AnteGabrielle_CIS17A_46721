/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prob3TableInherited.h
 * Author: Gabrielle
 *
 * Created on July 28, 2020, 4:05 PM
 */

#ifndef PROB3TABLEINHERITED_H
#define PROB3TABLEINHERITED_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include "Prob3Table.h"
using namespace std;

template<class T>
class Prob3TableInherited:public Prob3Table<T>
{
	protected:
		T *augTable;                                  //Augmented Table with sums
	public:
		Prob3TableInherited(char *,int,int);          //Constructor
                Prob3TableInherited(char *);                  //added
                Prob3TableInherited();                        //added
                Prob3TableInherited(const Prob3TableInherited<T> &that);//added
                bool operator ==(const Prob3TableInherited<T>&right ); //added
                Prob3TableInherited<T>& operator =(const Prob3TableInherited<T>&right ); //added
                Prob3TableInherited<T> operator+(const Prob3TableInherited<T>& right); //added  //OVERLOAD OPERATOR: LOOK OVER HERE
                 void operator <<(const Prob3TableInherited<T> &save);  //added     //SERIALIZE OBJECT: LOOK OVER HERE
                void operator >>(const Prob3TableInherited<T> &save);   //added     //DESERIALIZE OBJECT: LOOK OVER HERE
		~Prob3TableInherited(){delete [] augTable;};  //Destructor
		const T *getAugTable(void){return augTable;}; 
};

template<class T>
Prob3TableInherited<T>::Prob3TableInherited(char *name):Prob3Table<T>(name)
{
    augTable = new T[(this->rows+1)*(this->cols+1)];
    int index = 0;
    
    Prob3Table<T>:: calcTable();
    for (int i=0;i <this->rows;i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            augTable[index]=Prob3Table<T>:: table[(this->cols*i)+j];
            index++;
        }
        augTable[index]=Prob3Table<T>::rowSum[i];
        index++;
    }
    
   for (int i = 0; i < this->cols; i++)
   {
        augTable[index]=Prob3Table<T>::colSum[i];
        index++;
   }
    augTable[index] = this->grandTotal;
}

template<class T>
Prob3TableInherited<T>::Prob3TableInherited():Prob3Table<T>()
{
    augTable = new T[(this->rows+1)*(this->cols+1)];
    int index = 0;
    
    Prob3Table<T>:: calcTable();
    for (int i=0;i <this->rows;i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            augTable[index]=Prob3Table<T>:: table[(this->cols*i)+j];
            index++;
        }
        augTable[index]=Prob3Table<T>::rowSum[i];
        index++;
    }
    
   for (int i = 0; i < this->cols; i++)
   {
        augTable[index]=Prob3Table<T>::colSum[i];
        index++;
   }
    augTable[index] = this->grandTotal;
}

template<class T>
Prob3TableInherited<T>::Prob3TableInherited(char *name,int row,int col):Prob3Table<T>(name,row,col)
{
    augTable = new T[(row+1)*(col+1)];
    int index = 0;
    
    Prob3Table<T>:: calcTable();
    for (int i=0;i <row;i++)
    {
        for (int j = 0; j < col; j++)
        {
            augTable[index]=Prob3Table<T>:: table[(col*i)+j];
            index++;
        }
        augTable[index]=Prob3Table<T>::rowSum[i];
        index++;
    }
    
   for (int i = 0; i < col; i++)
   {
        augTable[index]=Prob3Table<T>::colSum[i];
        index++;
   }
    augTable[index] = this->grandTotal;
}

template <class T>
Prob3TableInherited<T> Prob3TableInherited<T>:: operator+(const Prob3TableInherited<T>& right) //OVERLOAD OPERATOR: LOOK OVER HERE
{
    Prob3TableInherited temp=right;
    
    int index = 0;
    temp.rows = this->rows;
    temp.cols = this->cols;
    temp.table = new T[temp.rows*temp.cols];
    temp.augTable = new T[(temp.rows+1)*(temp.cols+1)];
    for (int i=0;i <temp.rows;i++)
    {
        for (int j = 0; j < temp.cols; j++)
        {
            temp.table[index]=this->table[index]+right.table[index];
            cout << temp.table[index] << " " ;
            index++;
        }
        cout << endl;
    }
    
    index = 0;
    
    Prob3Table<T>:: calcTable();
    for (int i=0;i <this->rows;i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            augTable[index]=Prob3Table<T>:: table[(this->cols*i)+j];
            index++;
        }
        augTable[index]=Prob3Table<T>::rowSum[i];
        index++;
    }
    
   for (int i = 0; i < this->cols; i++)
   {
        augTable[index]=Prob3Table<T>::colSum[i];
        index++;
   }
    augTable[index] = this->grandTotal;
    
    return temp;
}

template <class T>
bool Prob3TableInherited<T>::operator ==(const Prob3TableInherited<T>&right )
{
    if (this->rows==right.rows && this->cols==right.cols)
    {
        return true;
    }
    else
    {
        cout << "Table sizes do not match." << endl << endl;
        return false;
    }
}

template <class T>
Prob3TableInherited<T>& Prob3TableInherited<T>::operator =(const Prob3TableInherited<T>&right )
{
    this->cols=right.cols;
    this->rows=right.rows;
    this->rowSum=new T[right.rows];
    this->colSum=new T[right.cols];
    this->table = new T [right.rows*right.cols+1];
    int index = 0;
    
    for (int i=0;i <this->rows;i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            this->table[index]=right.table[(right.cols*i)+j];
            index++;
        }
    }
    this->grandTotal=right.grandTotal;
    index = 0;

    for (int i = 0; i < right.cols; i++)
    {
        this->colSum[i]=right.colSum[i];
    }
    for (int i = 0; i < right.rows; i++)
    {
        this->rowSum[i]=right.rowSum[i];
    }
    
    this->augTable = new T [(right.rows+1)*(right.cols+1)];
    for (int i=0;i <this->rows+1;i++)
    {
        for (int j = 0; j < this->cols+1; j++)
        {
            augTable[index]=right.augTable[(this->cols*i)+j];
            index++;
        }
    }
}

template <class T>
Prob3TableInherited<T> ::Prob3TableInherited(const Prob3TableInherited<T> &right)
{
    this->cols=right.cols;
    this->rows=right.rows;
    this->rowSum=new T[right.rows];
    this->colSum=new T[right.cols];
    this->table = new T [right.rows*right.cols+1];
    int index = 0;
    
    for (int i=0;i <this->rows;i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            this->table[index]=right.table[(right.cols*i)+j];
            index++;
        }
    }
    this->grandTotal=right.grandTotal;
    index = 0;

    for (int i = 0; i < right.cols; i++)
    {
        this->colSum[i]=right.colSum[i];
    }
    for (int i = 0; i < right.rows; i++)
    {
        this->rowSum[i]=right.rowSum[i];
    }
    
    this->augTable = new T [(right.rows+1)*(right.cols+1)];
    for (int i=0;i <this->rows+1;i++)
    {
        for (int j = 0; j < this->cols+1; j++)
        {
            augTable[index]=right.augTable[(this->cols*i)+j];
            index++;
        }
    }
}

template <class T>
void Prob3TableInherited<T>::operator <<(const Prob3TableInherited<T> &save)    //SERIALIZE OBJECT: LOOK OVER HERE
{
    fstream out;
    cout << "Sending Sum Table to File..." << endl <<endl;
    out.open("Table.bin", ios::out |ios::binary);
    out.seekp(0L,ios::beg);
    stringstream s;
    string str;
    int index = 0;
    for (int i = 0; i < save.rows;i++)
    {
        for (int j=0; j < save.cols; j++)
        {
            s << save.table[index];
            index++;
            if (j<save.cols-1){s << " ";} 
        }
        s << endl;
    }
    str=s.str();
    char *a= new char [str.length()+1];
    strcpy(a,str.c_str());
    out.write(a,str.length()+1);
    out.close();
}

template <class T>
void Prob3TableInherited<T>::operator >>(const Prob3TableInherited<T> &save) //DESERIALIZE OBJECT: LOOK OVER HERE
{
    fstream in;
    char *a=new char[sizeof(Prob3TableInherited<T>)];
    cout << "Retrieving file..." << endl;
    in.open("Table.bin", ios::in |ios::binary);
    
    in.seekg(0L,ios::beg);
    in.read(reinterpret_cast<char *>(a),sizeof(in));
    in.close();
    cout << a;
}
#endif /* PROB3TABLEINHERITED_H */

