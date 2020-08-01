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
#include <cstdlib>
#include <cctype>
#include <string>
using namespace std;

class Player{
private: 
    string name;
    int row, col, mine;
    bool invalid;
public:
    Player()
    {   
        name = "Anon";
        row=0;
        col=0;
        mine=0;
        invalid=true;
    }
    Player(string n)
    {
        name=n;
        row=0;
        col=0;
        mine=0;
        invalid=true;
    }
    
    class BadRC{};
    class BadMns{};
    class Badrc{};
    class BadChc{};
    class BadFlag{};
    class LessTn1{};
    
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
        cin >> r >> c;
        // input validation
        while(invalid){
            try{
                if (cin.fail())
                {
                    throw BadRC();
                }
                else if (r<1 || c <1)
                {
                    throw LessTn1();
                }
                invalid = false;
            }
            catch (Player::BadRC)
            {
                cin.clear();
                cin.ignore();
                cout << "Input the row and column." << endl;
                cin >> r >> c;
            }
            catch (Player::LessTn1)
            {
                cout << "Input the row and column." << endl;
                cin >> r >> c;
            }
        }
        invalid=true;
        cout << "Input the number of mines." << endl;
        cin >> m;
        //input validation
        while(invalid){
            try{
                if (m <0 || m>r*c)
                {
                    throw BadMns();
                }
                invalid = false;
            }
            catch (Player::BadMns)
            {
                cout << "Input the number of mines." << endl;
                cin >> m;
            }
        }
        invalid = true;
        mine=m;
        row=r;
        col=c;
    }
    
    
    void getChc(int &rChoice, int &cChoice)
    {
        cout << "Pick a cell [row x col]: " << endl;
        cin >> rChoice >> cChoice;
        //input validation
        while(invalid){
            try{
                if (cin.fail())
                {
                    throw Badrc();
                }
                else if (rChoice < 1 || rChoice > row)
                {
                    throw BadChc();
                }
                else if (cChoice < 1 || cChoice > col)
                {
                    throw BadChc();
                }
                invalid = false;
            }
            catch (Player::Badrc)
            {
                cin.clear();
                cin.ignore();
                cout << "Pick a cell [row x col]: " << endl;
                cin >> rChoice >> cChoice;
            }
            catch (Player::BadChc)
            {
                cout << "Pick a cell [row x col]: " << endl;
                cin >> rChoice >> cChoice;
            }
        }
        invalid=true;
    }
    
    int getRow(){return row;}
    int getCol(){return col;}
    int getMine(){return mine;}
    
    char askFlg(){
        char choice=' ';
        cout << "Flag it? [Y/N]: ";
        cin >> choice;
        //input validation
         while(invalid){
            try{
                if (toupper(choice) != 'Y' && toupper(choice) != 'N')
                {
                    throw BadFlag();
                }
                invalid = false;
            }
            catch (Player::BadFlag)
            {
                cout << "Flag it? [Y/N]: ";
                cin >> choice;
            }
        }
        invalid = true;
        return toupper(choice);
    }
    
    //AI mode
    void setName(string n){
        name=n;
    }
    void setBrd(int r, int c, int m)
    {
        mine=m;
        row=r;
        col=c;
        //input val
    }
    void autoChc(int &rChoice,int &cChoice)
    {
        cout << "Pick a cell [row x col]: " << endl;
        rChoice = rand()%row+1;
        cChoice = rand()%col+1;
    }  
    char autoFlg()
    {
        char choice=' ';
        cout << "Flag it? [Y/N]: ";
        if (rand()%2==0){choice='Y';}
        else{choice='N';}
        return toupper(choice);
    }
    
};

#endif /* PLAYER_H */

