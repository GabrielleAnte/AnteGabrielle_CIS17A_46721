/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: Gabrielle
 *
 * Created on July 26, 2020, 2:44 AM
 */

#ifndef GAME_H
#define GAME_H

#include<iostream>
#include <string>
#include "InBrd.h"
#include "OutBrd.h"
#include "Player.h"
using namespace std;

class Game{
private:
    string name;    // name of the game
    Player player;
    InBrd inbrd;
    OutBrd outbrd;
    int rC, cC;
protected:
    int nrow, ncol, nmines;
public:
    Game ()
    {
        name = "";
        player.setName();
        nrow=0;
        ncol=0; 
        nmines=0;
    }
    
    Game(string n)
    {
        name = n;
        setUp();
    }
    
    void shoStrt()  //Display Intro
    {
        static int gmeCnt=0;
        gmeCnt++;
        cout << "Name of the Game: " << name << endl;
        cout << "Player Name: " << player.getName() << endl;
        cout << "Game #" << gmeCnt << endl << endl;
    }
    
    void setUp()
    {
        player.setName();
        player.setBrd();
        nrow=player.getRow();
        ncol=player.getCol();
        nmines=player.getMine();
        inbrd.setRow(nrow);
        inbrd.setCol(ncol);
        inbrd.setMine(nmines);
        inbrd.celdata();
        inbrd.addMine();
        inbrd.addVal();
    }
    
    void play()
    {
        outbrd.rdBrd(inbrd);
        outbrd.dspBrd();
        do{
        inbrd.dspBrd();//remove
        player.getChc(rC,cC);
        outbrd.reveal(rC,cC);
        }while(!gmeOver());
    }
    
    bool gmeOver()
    {
        if (outbrd.loss(rC,cC))
        {
            inbrd.dspBrd();
            cout << "Game Over!" << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    
};

#endif /* GAME_H */

