/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Q4_Savings_Account_Class.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 7:13 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "SavingsAccount.h"

using namespace std;

/*
 * Create a SavingsAccount class with the following
 * specification
 * 1)  The constructor initilizes the balance if greater than
 * 0 and sets the other properties to 0.
 * 2)  If the transaction is greater than 0 then a Deposit is
 * made else a Withdraw is made.
 * 3)  The balance is increased with a deposit but decreased
 * if a Withdrawal.  This assumes the Withdrawal is less than
 * the balance.  Can't have a negative balance.  Tell the user
 * that he is trying to make a withdrawal that exceeds his
 * balance.
 * 4)  When a WithDrawal is made increment FreqWithDraw else
 * if a Deposit is made increment FreqDeposit.
 * 5)  The toString procedure outputs all properties.
 * 6)  The total procedure tells you how much you will have in
 * savings given the interest rate and the amount of time.
 * Total(float savint,int time)  returns Balance*(1+savint)^time.
 * Utilize a for loop for this calculation.
 * 7)  See if you can write a recursive procedure that does
 * the same thing as 6).  Call it TotalRecursive.
 * 8)  Think of what follows as pseudocode.  The random number
 * generator below produces a number between 0 and 32,767.  If
 * you fashion a random number that will do the same then you
 * will get positive and negative transactions (-500,500).  
 * The output simply calculates the current balance with a 10 
 * percent interest rate and 7 years worth of compounding.  
 * Also, you tried to start out with a negative balance which 
 * should have been initialized to 0.
 * 	SavingsAccount mine(-300);
 * 
 * 	for(int i=1;i<=10;i++)
 * 	{
 * 		mine.Transaction((float)(rand()%500)*(rand()%3-1));
 * 	}
 * 	mine.toString();
 * 	cout<<"Balance after 7 years given 10% interest = "
 * 		<<mine.Total((float)(0.10),7)<<endl;
 * 	cout<<"Balance after 7 years given 10% interest = "
 * 		<<mine.TotalRecursive((float)(0.10),7)
 * 		<<" Recursive Calculation "<<endl;
 * 
 * Example Output:
 * 	WithDraw not Allowed
 * 	WithDraw not Allowed
 * 	Balance=1056
 * 	WithDraws=4
 * 	Deposit=5
 * 	Balance after 7 years given 10% interest = 2057.85
 * 	Balance after 7 years given 10% interest = 2057.85 Recursive Calculation
 */

int main(int argc, char** argv) {
    cout << "Extra Credit: Modify the toString() function in Problem 4 or 5 to return a string or for the most credit a char* [ => in SavingsAccount.cpp, toString function]" << endl;
    cout << "Extra Credit: Utilize problem 4 or 5 and Serialize the object to a binary file.Prove that it was done correctly. Get even more credit by serializing Problem 3.[=> last two functions in SavingsAccount.cpp, read contents shown in output]" << endl;
    cout << "Extra Credit: Exception handling for Problems 4 and 5 [=> in SavingsAccount.cpp, Withdraw function]"<< endl << endl;
    SavingsAccount mine(-300);
    srand(time(0));              //added
    char *a;                    //added
    for(int i=1;i<=10;i++)
    {
            mine.Transaction((float)(rand()%500)*(rand()%3-1));
    }
    a=mine.toString();      //modified
    cout << a;              //added
    cout<<"Balance after 7 years given 10% interest = "
            <<mine.Total((float)(0.10),7)<<endl;
    cout<<"Balance after 7 years given 10% interest = "
            <<mine.TotalRecursive((float)(0.10),7)
            <<" Recursive Calculation "<<endl;
    SavingsAccount yours(0);
    char *b;
    yours.operator <<(mine);
    yours.operator >>(b);
    
    delete a;
   // delete b;
    return 0;
}


