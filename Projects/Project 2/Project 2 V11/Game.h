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

#ifndef _DIAGRAM_GAME_H
#define _DIAGRAM_GAME_H
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
    int diff;
    static int gmeCnt;
    GmeBrd *gb;
    void setUp(string p, int r, int c, int m)
    {
        player.setName(p);
        player.setBrd(r,c,m);
        shoStrt();
        nrow=player.getRow();
        ncol=player.getCol();
        nmines=player.getMine();
        inbrd.setRow(nrow);
        inbrd.setCol(ncol);
        inbrd.setMine(nmines);
        inbrd.celdata();
        inbrd.addMine();
        inbrd.addVal();
        diff=0;
    }
    
protected:
    int nrow, ncol, nmines;
public:
    Game ()
    {
        gmeCnt++;
        name = "";
        nrow=0;
        ncol=0; 
        nmines=0;
        diff=0;
    }
    
    Game(string n)
    {
        gmeCnt++;
        name = n;
        setUp();
    }
    
    //Auto/AI Mode
    Game (string n, string p, int r, int c, int m)
    {
        gmeCnt++;
        name = n;
        setUp(p,r,c,m);
    }
    
    Game (const Game &right)
    {
        name=right.name;
        nrow=right.nrow;
        ncol=right.ncol;
        nmines=right.nmines;
        inbrd.setRow(nrow);
        inbrd.setCol(ncol);
        inbrd.setMine(nmines);
        inbrd.celdata();
        inbrd=right.inbrd;
        player=right.player;
        diff=0;
    }
    
    void shoStrt()  //Display Intro
    {
        cout << "Name of the Game: " << name << endl;
        cout << "Player Name: " << player.getName() << endl;
        cout << "Game #" << gmeCnt << endl << endl;
    }
    
    void setUp()
    {
        player.setName();
        shoStrt();
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
        diff=0;
    }
    
    void play()
    {
        char choice =' ';
        inbrd.dspBrd();//delete
        gb=&outbrd;
        outbrd.rdBrd(inbrd);
        gb->dspBrd();
        
        do{
            do{
                player.getChc(rC,cC);
            }while(!outbrd.spcOpn(rC,cC));
            if (outbrd.ckFlg(rC,cC)==true)
            {
                outbrd.unflag(rC,cC);
            }
            else
            {
                choice = player.askFlg();
                if (choice =='Y')
                {
                    outbrd.flag(rC,cC);
                }
                else{
                    outbrd.reveal(rC,cC);
                    if(outbrd.chkClr(rC,cC))
                    {
                        outbrd.clear(rC-1,cC-1);
                    }
                }
            }
            outbrd.dspBrd();
        }while(!gmeOver());
    }
    
    void aPlay()
    {
        char choice = ' ';
        outbrd.rdBrd(inbrd);
        outbrd.dspBrd();
        
        do{
            do{
                player.autoChc(rC,cC);
                cout << rC << " " << cC << endl;
            }while(!outbrd.spcOpn(rC,cC));
            if (outbrd.ckFlg(rC,cC)==true)
            {
                outbrd.unflag(rC,cC);
            }
            else
            {
                choice = player.autoFlg();
                cout<< choice << endl;
                if (choice =='Y')
                {
                    outbrd.flag(rC,cC);
                }
                else{
                    outbrd.reveal(rC,cC);
                    if(outbrd.chkClr(rC,cC))
                    {
                        outbrd.clear(rC-1,cC-1);
                    }
                }
            }
            outbrd.dspBrd();
        }while(!gmeOver());
    }
    
    bool gmeOver()
    {
        Stats<int> *a;
        a=&player;
        
        if (outbrd.loss(rC,cC))
        {
            inbrd.dspBrd();
            cout << "Game Over!" << endl;
            player.stats(false);
            return true;
        }
        else if (outbrd.win(rC,cC))
        {
            inbrd.dspBrd();
            cout << "You won!" << endl;
            player.stats(true);
            return true;
        }
        else
        {
            diff = outbrd.fRemain();
            cout << diff << " mines remaining." << endl;
            return false;
        }
    }
};

int Game::gmeCnt = 0;
#endif /* GAME_H */
#endif
