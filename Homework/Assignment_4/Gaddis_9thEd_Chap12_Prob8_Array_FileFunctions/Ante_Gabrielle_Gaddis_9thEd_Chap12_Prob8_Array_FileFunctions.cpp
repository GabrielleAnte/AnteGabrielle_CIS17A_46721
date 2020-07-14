/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Gaddis_9thEd_Chap12_Prob8_Array_FileFunctions.cpp
 * Author: Gabrielle
 *
 * Created on July 12, 2020, 7:51 PM
 */

#include <iostream>
#include <fstream>

using namespace std;

/*
 * Write a function named arrayToFile. The function should accept three 
 * arguments: the name of a file, a pointer to an int array, and the size of the 
 * array. The function should open the specified file in binary mode, write the 
 * contents of the array to the fie, and then close the file.  
 * 
 * Write another function named fileToArray, This function should accept three 
 * arguments: the name of a file, a pointer to an int array, and the size of the 
 * array. The function should open the specified file in binary mode, read its 
 * contents into the array, and then close the file.
 * 
 * Write a complete program that demonstrates these functions by using the 
 * arrayToFile function to write an array to a file, and then using the 
 * fileToArray function to read the data from the same file. After the data are 
 * read from the file into the array, display the array's contents on the screen.
 */
void arrayToFile(fstream& a , int *array, int size);
void fileToArray (fstream &a, int *array, int size);

int main(int argc, char** argv) {

    fstream in, out;
    in.open("writeData.txt", ios::in | ios::binary); //from file
    out.open("writeData.txt",ios::out | ios::binary); //to file 
    int *array;
    int size = 0;
    cin >> size;
    array = new int [size];
    for (int i =0; i < size; i++)
    {
        cin >> array[i];
    }
    
    arrayToFile(out,array,size);
    fileToArray(in,array, size);
    
    delete array;
    in.close();
    out.close();
    return 0;
}

void arrayToFile(fstream &a, int *array, int size) // write to file
{
    a.write(reinterpret_cast<char *>(array), size);
}

void fileToArray (fstream &a, int *array, int size )
{
    a.read(reinterpret_cast<char *>(array),sizeof(array));
    
    for (int i =0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    
}