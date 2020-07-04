/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_A7_Augment_a_table_with_row_column_grand_sums._20pts.cpp
 * Author: Gabrielle
 *
 * Created on July 4, 2020, 12:16 AM
 */

#include <iostream>//cin,cout
#include <iomanip> //setw(10)

using namespace std;

/*
 * Task -> Implement the functions specified.
 * 
 * 1)  Input the rows and column of a table, then input the table. 
 * 
 * 2)  Create a new table augmented by 1 row and 1 column. 

 * 
 *    The augmented table has the row sums in the new column and the column 
 *      sums in the new row.
 * 
 *    The grand sum is in the lower corner of the table.
 * 
 * 3)  See the sample test case for the input prompts and the table output 
 *      format.
 */

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int &,int &);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {

     //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}

void read(int array[][COLMAX],int &row,int &col)
{
    cout << "Input a table and output the Augment row,col and total sums." << endl;
    cout << "First input the number of rows and cols. <20 for each" << endl;
    cin >> row >> col;
    cout << "Now input the table." << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }
}

void sum(const int array[][COLMAX],int row,int col,int augAry[][COLMAX])
{
    int sum, total = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            augAry[i][j] = array[i][j];
            sum += array[i][j];
            total += array[i][j];
        }
        augAry[i][col] =sum;
    }
    for (int i = 0; i < col; i++)
    {
        sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += array[j][i];
        }
        augAry[row][i] =sum;
    }
    augAry[row][col] = total;
}

void print(const int array[][COLMAX],int row,int col,int size)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << right << setw(10) << array[i][j];
        }
        cout << endl;
    }
}