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
#include "Employee.h"
using namespace std;

Employee::Employee(char name[], char title[], float rate)
{
    strcpy(MyName,name);
    strcpy(JobTitle,title);
    HourlyRate = setHourlyRate(rate);
    HoursWorked = 0;
    GrossPay = 0;
    NetPay = 0;
}

Employee::Employee()
{
    strcpy(MyName,"Anon");
    strcpy(JobTitle," ");
    HourlyRate = 0;
    HoursWorked = 0;
    GrossPay = 0;
    NetPay = 0;
}
float Employee::CalculatePay(float x, int y)
{
    return getNetPay(getGrossPay(setHourlyRate(x)
		,setHoursWorked(y)));
}

float Employee::getGrossPay(float hr, int hw)
{
    float gross = 0.00;
    float hours = hw-40.00;

    //if more than 50 hours total
    if (hours >10.00)
    {
        hours = hours-10.00;
        gross=hr*(55.00+(2.00*hours)); //45 = 40 +(10/2)
    }
    //if more than 40, less than 50
    else if (hours>0.00)
    {
        gross=hr*(40.00+(1.50*hours));
    }
    else
    {
        gross=hr*hw;
    }
    GrossPay = gross;
    return GrossPay;
}

float Employee::getNetPay(float gp)
{
    NetPay = gp-Tax(gp); 
    return NetPay;
}

char* Employee::toString()       //modified from void to char* //TO CHAR*, LOOK OVER HERE
{
    char *ary;
    stringstream em;
    string s;
    em << "Name = " << MyName;
    em << " Job Title = " << JobTitle << endl;
    em << " Hourly Rate = " << HourlyRate;
    em << " Hours Worked = " << HoursWorked;
    em << " Gross Pay = " << GrossPay;
    em << " Net Pay = " << NetPay << endl;
    s=em.str();
    //cout << s;
    ary = new char[s.length()+1];
    strcpy(ary,s.c_str());
    
    return ary;
}

int Employee::setHoursWorked(int a) //EXCEPTIONS: LOOK OVER HERE
{
    try{                    // exception handling
        if (a <0 || a >84)
        {
            throw unHrWrk();
        }
        HoursWorked=a;
    }
    catch (Employee::unHrWrk)
    {
        cout << "Unacceptable Hours Worked" << endl;
        HoursWorked = 0;
    }
    
    return HoursWorked;
}

float Employee::setHourlyRate(float a)//EXCEPTIONS: LOOK OVER HERE
{
    try{                    // exception handling
        if (a <0 || a >200)
        {
            throw unHrRt();
        }
        HourlyRate=a;
    }
    catch (Employee::unHrRt)
    {
        cout << "Unacceptable Hourly Rate" << endl;
        HourlyRate=0;
    }

    return HourlyRate;
}

float Employee::Tax(float gp)      //modified from double to float
{
    float tax = 0.00;
    float pay = gp-500;
    //if more than 1000 total
    if (pay >500.00)
    {
        pay = pay-500.00;
        tax=150+(0.3*pay); 
    }
    //if more than 500, less than 1000
    else if (pay>0.00)
    {
        tax=50.00+(0.2*pay);
    }
    else
    {
        tax=0.1*gp;
    }

    return tax;
}
                
 void Employee:: operator << (Employee &save)//SERIALIZATION: LOOK OVER HERE
{
    fstream out;
    int num=3;
    cout << "Sending " << save.MyName << "'s data to File..." << endl <<endl;
    out.open("Employ.bin", ios::out|ios::in |ios::binary|ios::ate);
    
    if (strcmp(save.MyName,"Mark")==0){num=1;}
    else if(strcmp(save.MyName,"Mary")==0){num =2;}
    
    long cursor = num*2*sizeof(Employee);
    out.seekp(cursor,ios::beg);
    out.write(save.toString(),2*sizeof(Employee));
    out.close();
}

void Employee::operator >> (string name)//DESERIALIZATION: LOOK OVER HERE
{
    fstream in;
    char *save=new char[2*sizeof(Employee)];
    int num=3;
    cout << "Retrieving file for " << name << "..." << endl;
    in.open("Employ.bin", ios::in |ios::binary);
   
    if (name =="Mark"){num=1;}
    else if(name =="Mary"){num=2;}
    
    long cursor = num*2*sizeof(Employee);
    in.seekg(cursor,ios::beg);
    in.read(reinterpret_cast<char *>(save),2*sizeof(Employee));
    in.close();
    cout << save;
}