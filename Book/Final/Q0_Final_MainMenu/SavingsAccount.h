/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SavingsAccount.h
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 8:20 PM
 */

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <fstream> //added
using namespace std;

class SavingsAccount{
public:
    SavingsAccount(float);               //Constructor
    void  Transaction(float);            //Procedure
    float Total(float=0,int=0);	         //Savings Procedure
    float TotalRecursive(float=0,int=0);
    //void  toString();                    //Output Properties
    char  *toString();                   //modified
    class noMoney{};                        //added
    void operator << (SavingsAccount &);    //added 
    void operator >> (char *save);    //added
private:
    float Withdraw(float);               //Utility Procedure
    float Deposit(float);                //Utility Procedure
    float Balance;                       //Property
    int   FreqWithDraw;                  //Property
    int   FreqDeposit;                   //Property
};
#endif /* SAVINGSACCOUNT_H */

