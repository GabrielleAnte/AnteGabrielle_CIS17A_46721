/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Q5_Employee_Class.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 7:14 PM
 */

#include <iostream>
#include "Employee.h"

using namespace std;

/*
 * 	Create an Employee class with the following
 * specification
 * 1)  The constructor inputs the Name, Job Title and Hourly rate of
 * the employee.
 * 2)  All other properties are initialized to zero in the constructor.
 * 3)  The Tax utility routine calculates the tax based on 
 * .1 for GrossPay < 500,
 * .2 for GrossPay<1000 but greater than 500, and 
 * .3 for anything above 1000.
 * 4)  The Set procedures simply write and return the obvious
 * properties.
 * 5)  The toString procedure prints all the properties.
 * 6)  The getGrossPay procedure calculates straight time for hours
 * worked < 40, time and 1/2 for hours worked < 50 but greater than
 * 40, double time for all hours above 50.  The inputs to this
 * routine are the hourly rate and the hours worked.
 * 7)  The net pay routine returns the gross pay subtracting
 * off any taxes.  Realize that the Tax procedure is utilized
 * but these taxes are progressive rates for income above the
 * cutoff limit as described in 3).  Taxes are calculated for
 * 10% below 500, 20% for amounts between 500 and 1000 and
 * finally anything above 1000 is calculated at the 30% rate.
 * 8)  The Hoursworked must be > 0 and < 84
 * 9)  The Hourlyrate must be > 0 and < 200
 * 10) The calculate pay routine returns the net pay.
 * 	return getNetPay(getGrossPay(setHourlyRate(x)
 * 		,setHoursWorked(y)));
 */
int main(int argc, char** argv) {
    cout << "Extra Credit: Modify the toString() function in Problem 4 or 5 to return a string or for the most credit a char* [ => in Employee.cpp, toString function]" << endl;
    cout << "Extra Credit: Utilize problem 4 or 5 and Serialize the object to a binary file.Prove that it was done correctly. Get even more credit by serializing Problem 3.[=> last two functions in Employee.cpp, read contents shown in output]" << endl;
    cout << "Extra Credit: Exception handling for Problems 4 and 5 [=> in Employee.cpp, setHourlyRate and setHoursWorked functions]" << endl << endl;
    Employee Mark("Mark","Boss",215.50);
    Mark.setHoursWorked(-3);
    cout << Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(20.0),
            Mark.setHoursWorked(25));
    cout << Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(40.0),
            Mark.setHoursWorked(25));
    cout << Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(60.0),
            Mark.setHoursWorked(25));
    cout << Mark.toString();

    Employee Mary("Mary","VP",50.0);
    cout << Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),
            Mary.setHoursWorked(40));
    cout << Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),
            Mary.setHoursWorked(50));
    cout << Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),
            Mary.setHoursWorked(60));
    cout << Mary.toString();

    Employee mk (" ", " ", 0);
    mk.operator <<(Mark);

    mk.operator <<(Mary);

    
    mk.operator >>("Mary");

    mk.operator >>("Mark");

    
    return 0;
}

