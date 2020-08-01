#include <iostream>
#include <string>
#include "Game.h"
using namespace std;

int Game::gmeCnt = 0; ///< used to initialize the static member variable gmeCnt

/**parameterized set up for the AI mode of the game */
void Game::setUp(string p, int r, int c, int m)
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

/** default constructor for the game class*/
Game::Game ()
{
    gmeCnt++;
    name = "";
    nrow=0;
    ncol=0; 
    nmines=0;
    diff=0;
}

/** constructor #2 for the game class, accepts string n as an argument to assign as the name of the game */
Game::Game(string n)
{
    gmeCnt++;
    name = n;
    setUp();
}

/** constructor #3 for the game class, accepts 5 arguments to initialize in the AI mode of the game */
Game::Game (string n, string p, int r, int c, int m)
{
    gmeCnt++;
    name = n;
    setUp(p,r,c,m);
}

/** copy constructor for the game class*/
Game::Game (const Game &right)
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

/**displays the intro, listing the name of the game, the name of the player and the game count */
void Game::shoStrt() 
{
    cout << "Name of the Game: " << name << endl;
    cout << "Player Name: " << player.getName() << endl;
    cout << "Game #" << gmeCnt << endl << endl;
}

/**sets up the game by prompting for player name, game board specifications, and then sets up the board*/
void Game::setUp()
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

/** goes through and simulates the game where the board is displayed, the player is prompted for a move and the selected cell is revealed*/
void Game::play()
{
    char choice =' ';
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

/** AI version of the game simulation, a random number generator creates the choice for the computer */
void Game::aPlay()
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

/** returns true or false on whether the game is over, checks for the win and lose case as well as displays the appropriate messages*/
bool Game::gmeOver()
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