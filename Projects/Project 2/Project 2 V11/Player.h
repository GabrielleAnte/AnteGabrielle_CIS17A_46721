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

#ifndef _DIAGRAM_PLAYER_H
#define _DIAGRAM_PLAYER_H
#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <cstdlib>
#include <cctype>
#include <regex>
#include <string>
#include <sstream>
#include "Stats.h"
using namespace std;

class Player: public Stats<int>
{
private: 
    string name;
    int row, col, mine;
    int number;
    float pts;
    bool invalid;
public:
    /** Default constructor for Player class */
    Player():Stats()
    {   
        name = "Anon";
        row=0;
        col=0;
        mine=0;
        invalid=true;
        pts=0.00;
    }
    /** string n is passed as a parameter to initialize n */
    Player(string n)
    {
        name=n;
        row=0;
        col=0;
        mine=0;
        invalid=true;
        pts=0.00;
    }
    
    class BadRC{};
    class BadMns{};
    class Badrc{};
    class BadChc{};
    class BadFlag{};
    class LessTn1{};
    
    /** \callergraph*/
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
        /// Exceptions: input validation
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
        cin.ignore();
        invalid=true;
        
        regex s("[0-9]+");
        string sm;
        cout << "Input the number of mines." << endl;
        getline(cin,sm);
        
        //input validation
        while(invalid){
            try{
                istringstream (sm) >> m;
                if (!regex_match(sm,s))
                {
                     throw BadMns();
                }
                else if (m <0 || m>r*c)
                {
                    throw BadMns();
                }
                invalid = false;
            }
            catch (Player::BadMns)
            {
                cout << "Input the number of mines." << endl;
                getline(cin,sm);
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
    
    void stats(bool win)
    {
        number=update(name, win);
        pts=points(win);
        cout << endl;
        cout << "Name: " << names.at(number) << endl;
        cout << "Wins: " << wins.at(number) << endl;
        cout << "Losses: " << losses.at(number) << endl;
        cout << "Points: " << pts << endl << endl;
    }
    
    float points(bool win)
    {
        if (win)
        {
            pts+=2.5;
        }
        return pts;
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
    
     Player& operator =(const Player &right)
     {
        name = right.name;
        row= right.row;
        col = right.col;
        mine = right.mine;
        pts=right.pts;
        invalid = right.invalid;
        number=right.number;
        return *this;
                
     }
    
};

#endif /* PLAYER_H */
#endif
