/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: Gabrielle
 *
 * Created on July 28, 2020, 10:01 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee{
    public:
		Employee(char[],char[],float);  //Constructor
                Employee();                     //added
		float  CalculatePay(float,int); //Procedure
		float  getGrossPay(float,int);  //Procedure
		float  getNetPay(float);        //Procedure
		//void   toString();              //Procedure
                char   *toString();
		int    setHoursWorked(int);     //Procedure
		float  setHourlyRate(float);    //Procedure
                class  unHrWrk{};               //added
                class  unHrRt{};
                void operator << (Employee &save); //added
                void operator >> (string name);
               
	private:
		//double Tax(float);      //Utility Procedure
                float Tax(float);
		char   MyName[20];      //Property
		char   JobTitle[20];    //Property
		float  HourlyRate;      //Property
		int    HoursWorked;     //Property
		float  GrossPay;        //Property
		float  NetPay;          //Property
};

#endif /* EMPLOYEE_H */

