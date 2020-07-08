/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ante_Gabrielle_Structures_Movie_Data.cpp
 * Author: Gabrielle
 *
 * Created on July 7, 2020, 9:42 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * Write a program that uses a structure named MovieData to store the following 
 *      information about a movie:
 * Title
 * Director
 * Year Released
 * Running Time (in minutes)
 * The program should read the number of movies, then create MovieData structure
 *      variables, store values in their members, and pass each one, in turn, to 
 *      a function that displays the information about the movie in a clearly 
 *      formatted manner. 
 */

struct MvDt { //because MovieData is more than 7 characters
    string title;
    string dirctr;
    int yrRlsd;
    int rnTime;
};

void print (MvDt m[], int num);

int main(int argc, char** argv) {
  int num;
	cout << "This program reviews structures" << endl;
    cout << "Input how many movies, the Title of the Movie, Director, Year Released, and the Running Time in (minutes)." <<endl;
    cin >> num;
    
    MvDt *mvs = new MvDt [num];
    for (int i = 0; i < num; i++)
    {
        cin.ignore();
        getline(cin, mvs[i].title);
        getline(cin, mvs[i].dirctr);
        cin >> mvs[i].yrRlsd;
        cin >> mvs[i].rnTime;
        
    }
   print (mvs, num);
  
    delete[] mvs;
	return 0;
}

void print (MvDt m[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << endl;
        cout << left << setw(11) <<"Title:" << m[i].title << endl;
        cout << left << setw(11) <<"Director:" << m[i].dirctr << endl;
        cout << left << setw(11) <<"Year:" << m[i].yrRlsd << endl;
        cout << left << setw(11) <<"Length:" << m[i].rnTime << endl;
    }
}