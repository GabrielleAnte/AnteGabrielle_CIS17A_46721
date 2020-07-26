/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Emp.h
 * Author: Gabrielle
 *
 * Created on July 23, 2020, 9:32 PM
 */

#ifndef EMP_H
#define EMP_H

#include <string>
using namespace std;

class Emp{
private:
    string name;
    int num;
    string date;
public:    
    Emp()
    {
        name = "";
        num=0;
        date="1/1/1970";
    }
    
    Emp(string n, int a,string d)
    {
        name = n;
        num=a;
        date=d;
    }
    
    void setName(string n){name=n;}
    void setNum(int n){num=n;}
    void setDate(string n){date=n;}
    
    string getName(){return name;}
    int getNum(){return num;}
    string getDate(){return date;}
};


#endif /* EMP_H */

