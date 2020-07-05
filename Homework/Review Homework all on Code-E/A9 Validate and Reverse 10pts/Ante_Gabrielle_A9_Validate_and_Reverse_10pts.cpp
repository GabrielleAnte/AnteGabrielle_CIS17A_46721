/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_A9_Validate_and_Reverse_10pts.cpp
 * Author: Gabrielle
 *
 * Created on July 4, 2020, 8:23 PM
 */

//System Libraries Here
#include <iostream>//cin,cout,endl
#include <cstring> //strlen()

using namespace std;

/*
 * Task -> main() and prototypes are supplied.  You implement the 3 functions 
 *      specified by the prototypes.
 * The idea behind this problem is that you input a certain integer data type 
 *      and convert.  However, a typing error could occur along the way.  You 
 *      need to detect the error or do the conversion if possible.  If not then 
 *      you output no conversion possible.  Concepts to use are character 
 *      arrays, the strlen() function, the ascii table, and the ranges 
 *      associated with the short data-type.
 * 
 * Process inputs using the following
 * 1)  Write a function that inputs numerical digits in the range of an unsigned
 *       short.
 * 2)  Write a function that reverses the number to a range of a signed short
 * 3)  Only subtract the largest 3 digit number from the reverse if the result 
 *      is not negative.
 * 
 * Display
 * 1)  The numeric result that falls within the range specified after 
 *      converting, or 
 * 2)  No Conversion Possible if any step 1) or 2) is outside the range 
 *      specified.
 * 
 * Note: It is assumed that leading zeros need not be input or printed.  
 *      A number like
 * 00321 is the same as 321, 00021 is the same as 21;
 * Look at the code and sample test cases for example i/o
 * 
 * Examples
 *  
 * 321 -> represents 00321 -> reverse digits 12300 -> subtract 999 -> results 
 *      11301
 * 
 * 101a1 -> No Conversion Possible
 * 
 * 99999 -> No Conversion Possible
 * 
 * 43210 -> reverse digits 01234 -> 1234 -> subtract 999 -> results 235
 * 
 * 12345-> reverse digits 54321 -> No Conversion Possible
 */

//Function Prototypes Here
bool  inRange(const char [],unsigned short &);//Output true,unsigned or false
bool  reverse(unsigned short,signed short &);//Output true,short or false
short subtrct(signed short,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
  //Declare all Variables Here
    const int SIZE=80;     //More than enough
    char  digits[SIZE];    //Character digits or not
    unsigned short unShort;//Unsigned short
    short snShort;         //Signed short
    
    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;
    
    //Test if it is in the Range of an unsigned short
    if(!inRange(digits,unShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Reverse and see if it falls in the range of an signed short
    if(!reverse(unShort,snShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(snShort,999);
    
    //Output the result
    cout<<snShort<<endl;
    
    //Exit
    return 0;
}

bool  inRange(const char digits[],unsigned short &unShort)
{  
    unShort = 0;
    int i = 0, temp = 0;
    int length = strlen(digits);
    int ten = 1;

    for (int i = 0; i < length-1; i++)
    {
        ten*=10;
    }
    for (int i = 0; i < length; i++)
    {
         if (digits[i]-48 <0 || digits[i]-48>9)
        {
            return false;
        }
        temp += (digits[i]-48)*ten;
        ten/=10;
    }
    
    if (temp <0 || temp > 65535)
    {
        return false;
    }
    else
    {
        unShort = temp;
        return true;
    }
}

bool  reverse(unsigned short unShort,signed short &snShort)
{
    int length = 5;
    int digits[length];
    int tens = 10000;
    int i = 0, temp =0;
    int ten = 1;
    snShort = 0;
    for (int i = 4; i >= 0; i--)
    {
        digits[i] = unShort/tens;
        unShort %=tens;
        tens/=10;
    }
    for (int i = 0; i < length-1; i++)
    {
        ten*=10;
    }
    for (int i = 0; i < length; i++)
    {
         if (digits[i] <0 || digits[i]>9)
        {
            return false;
        }
        temp += (digits[i])*ten;
        ten/=10;
  
    }
    if (temp <-32768 || temp > 32767)
    {
        return false;
    }
    else if (temp == unShort)
    {
        return false;
    }
    else
    {
       snShort = temp;
       return true;
    }
}

short subtrct(signed short snShort,int num)
{
    short ans = snShort - num;
    
    if (ans >= 0)
    {
        return ans;    
    }
    else
    {
        return snShort;
    }
}