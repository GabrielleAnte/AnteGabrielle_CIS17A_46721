/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Essay.h
 * Author: Gabrielle
 *
 * Created on July 24, 2020, 3:50 PM
 */

#ifndef ESSAY_H
#define ESSAY_H
//936
#include <iostream>
#include <string>
#include "GrdAct.h"
using namespace std;

class Essay: public GrdAct
{
private:
    int gram;
    int spel;
    int crtL;
    int cnt;
    
public:
    
    Essay():GrdAct()
    {
        gram = 0;
        spel = 0;
        crtL = 0;
        cnt = 0;
    }
    
    Essay (int g, int s, int cl, int c):GrdAct()
    {
        const int mGram = 30;
        const int mSpel = 20;
        const int mCrtL = 20;
        const int mCnt = 30;
        tryAgn(g,mGram, "Grammar");
        gram=g;
        tryAgn(s,mSpel, "Spelling");
        spel=s;
        tryAgn(cl,mCrtL, "Correct Length");
        crtL=cl;
        tryAgn(c,mCnt,"Content");
        cnt=c;
        getSum();
    }
    
    class inVd{};
    
    void tryAgn(int &in , int max, string i)
    {
        bool invalid = true;
        while(invalid){
            try{
                if (in <0 || in>max)
                {
                    throw inVd();
                }
                invalid = false;
            }
            catch (Essay::inVd)
            {
                cout << "For " << i<<": Invalid Input [1-"<<max<<"]. Try Again: ";
                cin >> in;
            }
        }
    }
    
    void setGram(int a){
        const int mGram = 30;
        tryAgn(a,mGram, "Grammar");
        gram=a;
    }
    
    void setSpel(int a){
        const int mSpel = 20;
        tryAgn(a,mSpel, "Spelling");
        spel=a;
    }
    
    void setCrtL(int a){
        const int mCrtL = 20;
        tryAgn(a,mCrtL, "Correct Length");
        crtL=a;
    }
    
    void setCnt(int a){    
        const int mCnt = 30;
        tryAgn(a,mCnt, "Content");
        cnt=a;
    }
    
    int getGram(){return gram;}
    int getSpel(){return spel;}
    int getCrtL(){return crtL;}
    int getCnt(){return cnt;}
    
    void getSum()
    {
        int total = 0;
        total = gram+spel+crtL+cnt;
        setScr(total);
    }
};

#endif /* ESSAY_H */

;