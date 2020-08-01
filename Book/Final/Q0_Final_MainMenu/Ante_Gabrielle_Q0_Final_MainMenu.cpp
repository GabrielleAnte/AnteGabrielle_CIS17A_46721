/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Q0_Final_MainMenu.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 10:32 PM
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <regex>  
#include "Prob1Random.h"
#include "Prob2Sort.h"
#include "Prob3TableInherited.h"
#include "SavingsAccount.h"
#include "Employee.h"

using namespace std;

/* Extra Credit done:
 * 1)  5   pts->Modify the toString() function in Problem 4 or 5 to return
 * 	a string or for the most credit a char *; //in Problem 4 and Problem 5
 * 2)  5   pts->Utilize problem 4 or 5 and Serialize the object to a 
 * 	binary file.  Prove that it was done correctly. // Problem 3, 4 and 5
 * 	Get even more credit by serializing Problem 3.
 * 3)  2.5 pts->Utilize problem 3 to overload the + operator.  Then take
 *         2 arrays and add them together from this class.
 * 4)  2.5 pts->Convert Problem 1 by using templates in place of the 
 * 	character arrays.
 * 5)  2.5 pts->Exception handling for Problems 4 and 5 // Problem 4 and 5
 * 7)  5   pts->Utilize regular expressions on all problems requiring inputs.// Problem 0 (Menu) and Problem 2
 */

void Menu();
int getN();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void def(int inN);

int main(int argc, char** argv) {
    int inN;
        do{
         Menu();
         inN=getN();
         switch(inN){
          case 1:    problem1();break;
          case 2:    problem2();break;
          case 3:    problem3();break;
          case 4:    problem4();break;
          case 5:    problem5();break;
          case 6:    problem6();break;
          default:   def(inN);}
        }while(inN<7);
    
    return 0;
}

void Menu()
{
    cout << endl << endl;
    cout << "Extra Credit: Utilize regular expressions on all problems requiring inputs [Main Menu Included => in getN function]." << endl << endl;
    cout << "Main Menu: " << endl;
    cout << "1) Random Sequence" << endl;
    cout << "2) All Kinds of Sorting" << endl;
    cout << "3) Spreadsheet Stuff" << endl;
    cout << "4) Savings Account Class" << endl;
    cout << "5) Employee Class" << endl;
    cout << "6) Conversions" << endl;
    cout << "7) Quit the Program" << endl;
 
}

int getN()
{
    int i = 0;
    string choice = " ";
    regex num("[1-7]$");    // LOOK OVER HERE
    do{
    cout << "Enter the corresponding number to your selected choice[1-7]: " << endl;
    cin >> choice;
    } while (!regex_match(choice,num));
    istringstream(choice) >> i;
    return i;
}

void problem1(){
    cout << "Extra Credit: Convert Problem 1 by using templates in place of the character arrays. [=> in Prob1Random.h]" << endl << endl;
    srand(time(0));
    char n=5;
    char rndseq[]={18,33,56,79,126};
    int ntimes=100000;
    Prob1Random <char>a(n,rndseq);
    for(int i=1;i<=ntimes;i++)
    {
            a.randFromSet();
    }
    int *x=a.getFreq();
    char *y=a.getSet();
    for(int i=0;i<n;i++)
    {
            cout<<int(y[i])<<" occured "<<x[i]<<" times"<<endl;
    }
    cout<<"The total number of random numbers is "<<a.getNumRand()<<endl;
}

void problem2(){
    cout << "Extra Credit: Utilize regular expressions on all problems requiring inputs. [ => in main, when asking for which column to sort]" << endl << endl;
    cout<<"The start of Problem 2, the sorting problem"<<endl;
    Prob2Sort<char> rc;
    //bool ascending=true;
    bool ascending=false;
    ifstream infile;
    infile.open("Problem2.txt",ios::in);
    char *ch2=new char[10*16];
    char *ch2p=ch2;
    while(infile.get(*ch2)){cout<<*ch2;ch2++;}
    infile.close();
    cout<<endl;

    regex num("^[+]?([1-9]|1[0-5])$"); //added      //LOOK OVER HERE
    string col;  //added
    int column; //moved up

    do{ // do while added
    cout<<"Sorting on which column"<<endl;
    //cin>>column;
    cin>>col;       //modified
    } while (!regex_match(col,num));
    istringstream(col)>>column; //added
    char *zc=rc.sortArray(ch2p,10,16,column,ascending);
    for(int i=0;i<10;i++)
    {
            for(int j=0;j<16;j++)
            {
                    cout<<zc[i*16+j];
            }
    }
    delete []zc;
    cout<<endl;   
}

void problem3(){

    cout << "Extra Credit: Utilize problem 3 to overload the + operator.  Then take 2 arrays and add them together from this class. [=> in Problem3TableInherited.h file, sum table shown in output]" << endl;
    cout << "Extra Credit: Serialized problem 3 - Utilize problem 4 or 5 and Serialize the object to a binary file. Prove that it was done correctly. Get even more credit by serializing Problem 3. [ => in Problem3TableInherited.h file, read contents shown in output]" << endl << endl;

    cout<<"Entering problem number 3"<<endl;
    int rows=5;
    int cols=6;
    char a[25];
    Prob3TableInherited<int> tab("Problem3.txt",rows,cols);
    const int *naugT=tab.getTable();
    for(int i=0;i<rows;i++)
    {
            for(int j=0;j<cols;j++)
            {
                    cout<<naugT[i*cols+j]<<" ";
            }
            cout<<endl;
    }
    cout<<endl;
    const int *augT=tab.getAugTable();
    for(int i=0;i<=rows;i++)
    {
            for(int j=0;j<=cols;j++)
            {
                    cout<<augT[i*(cols+1)+j]<<" ";
            }
            cout<<endl;
    }
    
    //added
    cout << endl;;
    cout << "Array 1" << endl;
    strcpy(a, "Array1.txt");
    Prob3TableInherited<int> t1(a);
    cout << "Array 2" << endl;
    strcpy(a, "Array2.txt");
    Prob3TableInherited<int> t2(a);
   
     cout << "Adding Problem 3 and Array 1" << endl;
    if (tab==t1){
        Prob3TableInherited<int> sum1 = tab+t1;
        sum1.operator << (sum1);
        sum1.operator >> (sum1);
    }
     cout << "Adding Problem 3 and Array 2" << endl;
    if (tab==t2){ 
        Prob3TableInherited<int> sum2 = tab+t2;
        sum2.operator << (sum2);
        sum2.operator >> (sum2);
    }
    
}

void problem4(){
    cout << "Extra Credit: Modify the toString() function in Problem 4 or 5 to return a string or for the most credit a char* [ => in SavingsAccount.cpp, toString function]" << endl;
    cout << "Extra Credit: Utilize problem 4 or 5 and Serialize the object to a binary file.Prove that it was done correctly. Get even more credit by serializing Problem 3.[=> last two functions in SavingsAccount.cpp, read contents shown in output]" << endl;
    cout << "Extra Credit: Exception handling for Problems 4 and 5 [=> in SavingsAccount.cpp, Withdraw function]" << endl << endl;
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
    //delete b;
}

void problem5(){
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

}

void problem6(){
    
    int s = 11, a = 21; //for Q1;
    int b = 8;//for Q2 and 5
    int c = 10; // for Q3
    cout << left << setw(s+3)<< " 1) " << left << setw(a) << "BINARY" <<left << setw(a) << "OCTAL" << left << setw(a) << "HEX" << endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(a) << "11.11" <<left << setw(a) << "3.6" << left << setw(a) << "3.C" <<endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(a) << "0.01001100_._." <<left << setw(a) << "0.2314631_._." << left << setw(a) << "0.4C_" << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  " << left << setw(a) << "1011001.10110011_._." <<left << setw(a) << "131.54631_._." << left << setw(a) << "59.B3_"<< endl << endl; 
    cout << left << setw(s+3)<< " 2) " << "NASA Hex Float" << endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(b) << "78000002" << endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(b) << "4CCCCCFF" << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  "<< left << setw(b) << "59B33307" << endl << endl; 
    
    unsigned char a3=0x3C;
    unsigned short b3=0x4CCD;
    unsigned int c3=0x59B333, p1=7*a3, p2=7*b3,p3=7*c3;
    cout << left << setw(s+3)<< " 3) " <<"Scaled   => as Integer" << endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(c)<< "0x3C" << " = " << (int)a3 <<endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(c)<< "0x4CCD" << " = "<<(int)b3 << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  "<< left << setw(c)<< "0x59B333" << " = " << (int)c3 <<endl << endl; 
           
    cout << left << setw(s+3)<< " 4) "<< "Byte Rep from 3  Product"<< endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(c)<< "0x3C" << " x 7 = "<< left << setw(c) << p1; 
    p1>>=4;
    cout << " + 4 shifts = " << p1 << endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(c)<< "0x3C" << " x 7 = "<< left << setw(c) << p2;
    p2>>=16;
    cout << " +16 shifts = " << p2 << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  "<< left << setw(c)<< "0x3C" << " x 7 = "<< left << setw(c) << p3;
    p3>>=16;
    cout << " +16 shifts = " << p3 << endl << endl; 
    cout << left << setw(s+3)<< " 5) " << left << setw(b) << "NASA Hex Float" << " to " << left << setw(b) << "IEEE 754" << endl;
    cout << right << setw(s)<< "3.75" << ":  "<< left << setw(b) << "78000002" << "  = " <<  left << setw(b) << "40700000" << endl; 
    cout << right << setw(s)<< "0.3 " << ":  "<< left << setw(b) << "4CCCCCFF" << "  = " <<  left << setw(b) << "3E99999A" << endl; 
    cout << right << setw(s)<< "89.7 "<< ":  "<< left << setw(b) << "59B33307" << "  = " <<  left << setw(b) << "42B36666" << endl << endl; 
    
    cout << "_ means last 1 repeating" << endl;
    cout << "_. means last 2 repeating" << endl;
    cout << "_._ means last 3 repeating" << endl;
    cout << "_._. means last 4 repeating" << endl;
}

void def(int inN)
{
    cout << "You have chosen to exit the program. " << endl;
}

