/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_A3_Sort_a_1_Dimensional_Array_of_Characters_10pts.cpp
 * Author: Gabrielle
 *
 * Created on July 3, 2020, 4:25 PM
 */

#include <iostream>//cout,cin
#include <cstring> //strlen()

using namespace std;

/*
 * Task -> Same as last problem.  Implement the functions specified by the 
 *      prototypes.
 * The purpose of this problem is to sort a 1 dimensional array of characters.  
 *      Specify the size of the array and input the array.  If the array is 
 *      longer than specified, output if it is larger or smaller.  Utilize the 
 *      outputs supplied in main().
 * Example supplied in 2 test cases.
 * 
 * STDIN
 * 5
 * 54321
 * 
 * STDOUT
 * Read in a 1 dimensional array of characters and sort
 * Input the array size where size <= 20
 * Now read the Array
 * 12345
 */

int  read(char []);
void sort(char [],int);
void print(const char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {

    //Declare all Variables Here
    const int SIZE=80;//Larger than needed
    char array[SIZE]; //Character array larger than needed
    int sizeIn,sizeDet;//Number of characters to be read, check against length
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of characters and sort"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of characters and determine it's size
    cout<<"Now read the Array"<<endl;
    sizeDet=read(array);//Determine it's size
    //Compare the size input vs. size detected and sort if same
    //Else output different size to sort
    if(sizeDet==sizeIn){
        sort(array,sizeIn); //Sort the array
        print(array,sizeIn);//Print the array
    }else{
        cout<<(sizeDet<sizeIn?"Input size less than specified.":
            "Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}

int read(char array[])
{
    int length = 0;
    cin >> array;
    length = strlen(array);

    return length;
}
       
void sort(char array[],int size)
{
    int minIndex;
    char minValue;
    char temp;

    for (int i = 0; i < size - 1; i++) 
    {
        minIndex = i;
        minValue = array[i];
        for (int j = i + 1; j < size; j++) 
        {
            if (array[j] < minValue) 
            {
                minValue = array[j];
                minIndex = j;
            }
        }
        temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

void print(const char array [],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << endl;
}