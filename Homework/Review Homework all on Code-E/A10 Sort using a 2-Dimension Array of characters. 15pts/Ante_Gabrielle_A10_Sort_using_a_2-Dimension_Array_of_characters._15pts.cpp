/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_A10_Sort_using_a_2-Dimension_Array_of_characters._15pts.cpp
 * Author: Gabrielle
 *
 * Created on July 5, 2020, 4:32 PM
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()

using namespace std;

/*
 * F8 Sort using a 2-Dimension Array of characters. 15pts
Task-> Same as others which means implement the function prototypes to solve the problem.
This problem was solved in question 4 but it has a twist.  Before you sorted with respect 
to the ascii table using string compare -> strcmp() from the library.  You can use the same 
code but you will have to create your own strcmp().  The reason is you are going to change 
the sort order.  This time you will input a character array to change the sort order.  Then 
do the sort.
See the test samples for the format, but it really boils down to adding 1 function from 
Problem 3 which takes into account a different sort order.
 */

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int,const char[],const char[]);//Sort by row using strcmp();
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array
//int strcmp(char a[],char b[],char replace[],char with[]){
int strcmp(char [],char [],const char [],const char []);//Replace sort order

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    char replace[COLMAX],with[COLMAX];//New sort order
    
    //Input the new sort order then sort
    cout<<"Modify the sort order by swapping these characters."<<endl;
    cin>>replace;
    cout<<"With the following characters"<<endl;
    cin>>with;
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    //if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn,replace,with);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    
    //Exit
    return 0;
}
int read(char array[][COLMAX], int &size)
{
    int length = 0, max =0;
    int i=0;
    while(cin >> array[i])
    {
        length = strlen(array[i]);
        
        if (length > max)
        {
            max = length;
        }
        i++;
    }
    size =i;
    return max;
}

void sort(char array[][COLMAX],int row, int col, const char replace[], const char with[])
{ 
    char temp[COLMAX];
    for (int i = 0; i < row - 1; i++) {

        for (int j = i + 1; j < row; j++) {

            if (strcmp(array[i],array[j],replace,with) > 0){
              strcpy(temp, array[i]);
              strcpy(array[i], array[j]);
              strcpy(array[j], temp);
            }
        }
    }
}

void print(const char array [][COLMAX],int row, int col)
{
   for (int i = 0; i < row; i++)
    {   
        int j=0;
        while (array[i][j]!='\0')
        {
            cout << array[i][j];
            j++;
        }
        cout << endl;
    }
}

int strcmp(char ar1[],char ar2[],const char replace[],const char with[])
{
    const int ASCII = 256;
    char baslne[ASCII];
    int rlen = strlen(replace);
    int wlen = strlen(with);
    int temp = 0;
    int calc = 0;
    int min = rlen > wlen ? wlen : rlen;


    //ASCII table set
    for (int i = 0; i < ASCII; i++)
    {
        baslne[i] = i;
    }
    for (int i = 0; i < min; i++)
    {
        int a = 0;
        while (a < ASCII && baslne[a] != replace[i])
        {
            a++;
        }
        int b = 0;
        while (a < ASCII && baslne[b] != with[i])
        {
            b++;
        }
        temp = baslne[a];
        baslne[a] = baslne[b];
        baslne[b] = temp;
    }
    int index = 0, j = 0, k = 0;
    while (index < ASCII && ar1[index] == ar2[index])
    {
        index++;
    }
    while (j < ASCII && baslne[j] != ar1[index])
    {
        j++;
    }
    while (k < ASCII && baslne[k] != ar2[index])
    {
        k++;
    }
    calc = j - k;
    return calc;
}
 
