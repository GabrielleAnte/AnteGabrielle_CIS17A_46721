/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrdAct.h
 * Author: Gabrielle
 *
 * Created on July 24, 2020, 3:51 PM
 */

#ifndef GRDACT_H
#define GRDACT_H

class GrdAct{
protected:
    float score;
public:
    GrdAct()
    { score=0.0;}
    
    GrdAct(float s)
    {score=s;}
    
    void setScr(float s)
    { score = s;}
    
    float getScore() const
    {return score;}
    
    char getLtr() const
    {
        char letter;
        
        if (score>89){letter='A';}
        else if (score>79){letter='B';}
        else if (score>69){letter='C';}
        else if (score>59){letter='D';}
        else{letter='F';}
        
        return letter;
    }
    
};

#endif /* GRDACT_H */

