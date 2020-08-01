/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <fstream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(float b)
{
    if (b>0)
    {
        Balance = b;
    }
    else
    {
        Balance = 0;
    }
    FreqWithDraw=0;
    FreqDeposit = 0;
    
}

void SavingsAccount::Transaction(float b)
{
    if (b>0)
    {
        Deposit(b);
    }
    else
    {
        Withdraw(b);
    }
}

float SavingsAccount::Total(float savint,int time)
{
    float b=1.00;
    for (int i=0; i < time;i++)
    {
        b*=(1+savint);
    }
    b=Balance*b;
    return b;
}

float SavingsAccount::TotalRecursive(float savint,int time)
{
    static float b=1.00;
    
    if (time>0){
        b*=(1+savint);
        time--;
        TotalRecursive(savint,time);
    }
    
    return Balance*b;
}

char* SavingsAccount::toString()    // TO CHAR *, LOOK OVER HERE
{
    char* cAry;
    string s;
    stringstream ba;
    ba << "Balance=" << Balance <<"\nWithdraws=" <<FreqWithDraw;
    ba << "\nDeposit=" <<FreqDeposit << endl;
    s= ba.str();
    cAry=new char[s.length()+1];
    strcpy(cAry,s.c_str());
    return cAry;
}

float SavingsAccount::Withdraw(float b) //EXCEPTIONS: LOOK OVER HERE
{
    float bal = Balance+b;

    try{                    //exception handling included
        if (bal <0)
        {
            throw noMoney();
        }
        FreqWithDraw++;
        Balance = bal;
    }
    catch (SavingsAccount::noMoney)
    {
         cout << "WithDraw not Allowed" << endl;
    }
    /*if (bal>=0)
    {
        Balance = bal;
        FreqWithDraw++;    
    }
    else
    {
        cout << "WithDraw not Allowed" << endl;
    }*/
    
    return Balance;
}

float SavingsAccount::Deposit(float b)
{
    Balance += b;
    FreqDeposit++;
    return Balance;
}      

void SavingsAccount::operator << (SavingsAccount &save) //SERIALIZATION: LOOK OVER HERE
{
    fstream out;
    cout << "Sending to File..." << endl <<endl;
    out.open("Savings.bin", ios::out |ios::binary);
    out.seekp(0L,ios::beg);
    out.write(save.toString(),3*sizeof(SavingsAccount));
    out.close();
}

void SavingsAccount::operator >> ( char *save) //DESERIALIZATION: LOOK OVER HERE
{
    fstream in;
    save=new char [3*sizeof(SavingsAccount)];
    cout << "Receiving from File..." << endl;
    in.open("Savings.bin", ios::in |ios::binary);
    in.seekg(0L,ios::beg);
    in.read(reinterpret_cast<char *>(save),3*sizeof(SavingsAccount));
    in.close();
    cout <<save;
    delete []save;
}