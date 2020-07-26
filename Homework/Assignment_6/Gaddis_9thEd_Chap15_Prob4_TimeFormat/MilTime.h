/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MilTime.h
 * Author: Gabrielle
 *
 * Created on July 24, 2020, 3:49 PM
 */

#ifndef MILTIME_H
#define MILTIME_H

#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

class MilTime : public Time
{
private:
    int mHr;
    int mSec;
public:
    MilTime():Time()
    {
        mHr=0;
        mSec=0;
    }
    
    MilTime(int mh, int ms)
    {
        setTime(mh,ms);
    }
    
    int getMHr(){return mHr;}
    int getSHr(){
        int h=mHr/100;
        if (mHr >1200)
        {
            h=(mHr-1200)/100;
        }
        return h;
    }
    
    void setTime(int h, int s)
    {
        while(h<0 || h>2359)
        {
            cout << "Not a valid military hour. Try Again [0-2359]: ";
            cin >> h;
        }
        
        while (s<0||s>59)
        {
            cout << "Not a valid second. Try Again [0-59]: ";
            cin >> s;
        }
        
        mHr = h;
        mSec=s;
        hour=getSHr(), min=mHr%100,sec=mSec;
        if (min>59)
        {
            hour++;
            min=min-60;
        }
    }
    
    void print()
    {
        cout << setfill('0');
        cout << "Military Format: " << endl;
        cout << right << setw(4) <<mHr << " hours and " << mSec << " seconds" << endl;
        cout << "Standard Format: " << endl;
        if (hour == 0)
        {
            cout << "12";
        }
        else
        {
            cout << right << setw(2) << hour;
        }
        cout << ":" << right << setw(2) << min<< ":" << right << setw(2) << sec;
        
        if (mHr/100<12)
        {
            cout << " a.m." << endl;
        }
        else
        {
            cout << " a.m." << endl;
        }
    }
};

#endif /* MILTIME_H */

