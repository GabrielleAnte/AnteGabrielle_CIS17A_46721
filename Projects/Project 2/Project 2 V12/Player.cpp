#include <iostream>
#include <cstdlib>
#include <cctype>
#include <regex>
#include <string>
#include <sstream>
#include "Stats.h"
#include "Player.h"
using namespace std;

/** string n is passed as a parameter to initialize n */
Player::Player(string n)
{
    name=n;
    row=0;
    col=0;
    mine=0;
    invalid=true;
    pts=0.00;
}

/** asks for the player's name and assigns it to member variable name */
void Player::setName()
{
    string n="";
    cout << "Enter the player name: ";
    cin >> n;
    name=n;
}

/**player is prompted to enter the number of rows, columns and mines for the game*/
void Player::setBrd()
{
    int r=0, c=0, m=0;
    cout << "Input the row and column." << endl;
    cin >> r >> c;

    /** Exceptions: Input Validation*/
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

    /**Exceptions: Input Validation*/
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

/**player is prompted to choose a cell, with exception handling*/
 void Player::getChc(int &rChoice, int &cChoice)
{
    cout << "Pick a cell [row x col]: " << endl;
    cin >> rChoice >> cChoice;
    /**Exceptions: Input Validation*/
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
 
 /**using 3 arguments, sets the row, column and mine member variables*/
 void Player::setBrd(int r, int c, int m)
{
    mine=m;
    row=r;
    col=c;
}
 
 /**player is prompted if they would like to flag the selected cell; with exception handling*/
char Player::askFlg()
{
    char choice=' ';
    cout << "Flag it? [Y/N]: ";
    cin >> choice;
    /**Exceptions: Input Validation*/
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

/**calls the update function to update the states and then displays the stats*/
void Player::stats(bool win)
{
    int n = 3;
    number=update(name, win, n);
    pts=points();
    cout << endl;
    cout << "Name: " << names.at(number) << endl;
    cout << "Wins: " << wins.at(number) << endl;
    cout << "Losses: " << losses.at(number) << endl;
    cout << "Points: " << pts << endl << endl;
}
 
/** In AI mode, AI player random chooses a cell and assigns the number as a row and column choice*/
void Player::autoChc(int &rChoice,int &cChoice)
{
    cout << "Pick a cell [row x col]: " << endl;
    rChoice = rand()%row+1;
    cChoice = rand()%col+1;
}

/** In AI mode, AI player randomly chooses whether to flag the selected cell */
char Player::autoFlg()
{
    char choice=' ';
    cout << "Flag it? [Y/N]: ";
    if (rand()%2==0){choice='Y';}
    else{choice='N';}
    return toupper(choice);
}

/** overloaded assignment operator*/
Player& Player::operator =(const Player &right)
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