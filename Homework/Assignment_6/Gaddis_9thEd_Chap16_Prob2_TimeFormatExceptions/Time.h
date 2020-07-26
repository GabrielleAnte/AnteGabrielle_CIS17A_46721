/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Time.h
 * Author: Gabrielle
 *
 * Created on July 25, 2020, 9:36 PM
 */

#ifndef TIME_H
#define TIME_H

class Time{
    protected:
       int hour;
       int min;
       int sec;
    public:
       Time()
        {hour=0;min=0;sec=0;}
       
       Time(int h,int m,int s)
        {hour=h;min=m;sec=s;}
       
       int getHour() const
        {return hour;}
       
       int getMin() const
        {return min;}
       
       int getSec() const
        {return hour;}
};

#endif /* TIME_H */

