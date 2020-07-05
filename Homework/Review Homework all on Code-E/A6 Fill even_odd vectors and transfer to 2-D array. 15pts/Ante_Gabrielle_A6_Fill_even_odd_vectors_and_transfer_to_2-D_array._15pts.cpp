/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_A6_Fill_even_odd_vectors_and_transfer_to_2-D_array._15pts.cpp
 * Author: Gabrielle
 *
 * Created on July 4, 2020, 6:24 PM
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right

using namespace std;

/*
 *Task -> Same as last problem.
 * Purpose:  Input numbers and segregate them by placing their values into even
 *       or odd vectors based upon their value being even or odd.  Then fill a 
 *      2-D array with the first column containing the contents of the even 
 *      vector and the second column containing the odd vector.  Output the 
 *      result and display the contents of the vectors and array.
 * See the sample case for the format of the output. 
 */

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

int main(int argc, char** argv) {
  //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    //Input data and place even in one vector odd in the other
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}

void read(vector<int> &even, vector<int> &odd)
{
    int num =0, data = 0;
    cout << "Input the number of integers to input."<< endl;
    cin >> num;
    cout << "Input each number." <<endl;
    for (int i =0; i < num; i++)
    {
        cin >> data;
        if (data %2 ==0)
        {
            even.push_back(data);
        }
        else 
        {
            odd.push_back(data);
        }
    }
}

void copy(vector<int>even, vector<int>odd,int array[][COLMAX])
{
    int max = 0;
    
    if (odd.size() > even.size())
    {
        max = odd.size();
    }
    else
    {
        max = even.size();
    }
    
    for (int i =0; i < max; i++)
    { 
        array[i][0] = even[i];
        array[i][1] = odd[i];
    }
}

void prntVec(vector<int>even, vector<int>odd,int size)
{
    int min = 0, diff = 0;
    diff = odd.size() - even.size();
    if (diff < 0)
    {
        min = odd.size();
    }
    else
    {
        min = even.size();
    }
    
    cout << right << setw(size) << "Vector";
    cout << right << setw(size) << "Even";
    cout << right << setw(size) << "Odd" << endl;
    for (int i =0; i < min; i++)
    {
        cout << right << setw(size) << " ";
        cout << right << setw(size) << even[i];
        cout << right << setw(size) << odd[i] << endl;
    }
    if (diff < 0)
    {
        for (int i =min; i < even.size(); i++)
        {
            cout << right << setw(size) << " ";
            cout << right << setw(size) << even[i];
            cout << right << setw(size) << " " << endl;
        }
    }
    else
    {
         for (int i =min; i < odd.size(); i++)
        {
            cout << right << setw(size) << " ";
            cout << right << setw(size) << " ";
            cout << right << setw(size) << odd[i] << endl;
        }
    }
}

void prntAry(const int array[][COLMAX],int eSize,int oSize,int size)
{
    int min = 0, diff = 0;
    diff =oSize- eSize;
    if (diff < 0)
    {
        min = oSize;
    }
    else
    {
        min = eSize;
    }
    cout << right << setw(size) << "Array";
    cout << right << setw(size) << "Even";
    cout << right << setw(size) << "Odd" << endl;
    for (int i =0; i < min; i++)
    {
        cout << right << setw(size) << " ";
        for (int j =0; j < COLMAX; j++)
        {
            cout << right << setw(size) << array[i][j];
        }
        cout << endl;
    }
    if (diff < 0)
    {
        for (int i =min; i < eSize; i++)
        {
            cout << right << setw(size) << " ";
            cout << right << setw(size) << array[i][0];
            cout << right << setw(size) << " " << endl;
        }
    }
    else
    {
         for (int i =min; i < oSize; i++)
        {
            cout << right << setw(size) << " ";
            cout << right << setw(size) << " ";
            cout << right << setw(size) << array[i][1] << endl;
        }
    }
}
