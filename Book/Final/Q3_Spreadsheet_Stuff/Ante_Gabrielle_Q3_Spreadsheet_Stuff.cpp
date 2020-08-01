/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Q3_Spreadsheet_Stuff.cpp
 * Author: Gabrielle
 *
 * Created on July 27, 2020, 7:12 PM
 */

#include <iostream>
#include<cstring>
#include<string>
#include "Prob3TableInherited.h"
using namespace std;

/*
 * Class Specifications
 * 
 * Example Input Table
 *    101   101   102   103   104   105
 *    106   107   108   109   110   111
 *    112   113   114   115   116   117
 *    118   119   120   121   122   123
 *    124   125   126   128   128   128
 * Example Output Table with rows summed,
 * columns summed and the grand total printed.
 *    101   101   102   103   104   105   616
 *    106   107   108   109   110   111   651
 *    112   113   114   115   116   117   687
 *    118   119   120   121   122   123   723
 *    124   125   126   128   128   128   759
 *    561   565   570   576   580   584  3436
 * 
 */
int main(int argc, char** argv) {
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
    
    return 0;
}

