/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 3:47 AM
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

class Player{
private: 
    string name;
    int row, col, mine;
public:
    Player()
    {
        name = "Anon";
        row=0;
        col=0;
        mine=0;
    }
    Player(string n)
    {
        name=n;
        row=0;
        col=0;
        mine=0;
    }
    
    string getName(){return name;}
    void setName(){
        string n="";
        cout << "Enter the player name: ";
        cin >> n;
        name=n;
    }
    
    void setBrd()
    {
        int r=0, c=0, m=0;
        cout << "Input the row and column." << endl;
        cin >> row >> col;
        // input validation
        row=r;
        col=c;
        cout << "Input the number of mines." << endl;
        cin >> m;
        //input validation
        mine=m;
    }
    
    int getRow(){return row;}
    int getCol(){return col;}
    int getMine(){return mine;}
    
};

#endif /* PLAYER_H */

