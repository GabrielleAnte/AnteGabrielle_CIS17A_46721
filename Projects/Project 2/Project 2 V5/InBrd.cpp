/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "GmeBrd.h"
#include "InBrd.h"
#include "OutBrd.h"
#include "Cell.h"
using namespace std;

int GmeBrd::row;
int GmeBrd::col;
int GmeBrd::mine;

void InBrd::addMine()
{
    srand(time(0));
    int rnum=0, cnum=0;

    for (int i = 0; i < mine; i++) {
        do {
            rnum = rand() % row;
            cnum = rand() % col;
        } while (c[rnum][cnum].getMine() == true);
        c[rnum][cnum].setMine(true);
        c[rnum][cnum].setSym('%');
    }
}

   /* for (int i = 0; i < rnum; i++) {
        for (int j = 0; j < cnum; j++) {
            *(*(c+ i) + j)  = data();
            //c[i][j].nrow = i + 1;
            //c[i][j].ncol = j + 1;
        }
    }*/