/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stats.h
 * Author: Gabrielle
 *
 * Created on July 30, 2020, 1:14 PM
 */

#ifndef _DIAGRAM_STATS_H
#define _DIAGRAM_STATS_H

#ifndef STATS_H
#define STATS_H

#include <string>
#include <vector>
using namespace std;

template<class T>
class Stats
{
	protected:
            static vector <string> names;
            static vector <T> wins;
            static vector <T> losses;
            T point;
            int update(string name, bool win);
	public:
            Stats();
            T points(bool win);
};

template <class T>
Stats<T>::Stats()
{
    point = 0;
}

template <class T>
int Stats<T>::update(string name, bool win)
{
    int i = 0;
    while (i < names.size()&& name!=names.at(i))
    {
        i++;
    }
    if (i==names.size())
    {
        names.push_back(name);
        if(win)
        {
            wins.push_back(1);
            losses.push_back(0);
        }
        else
        {
            wins.push_back(0);
            losses.push_back(1);
        }
    }
    else{
        if(win)
        {
            wins.at(i)++;
            cout << wins.at(i);
        }
        else
        {
            losses.at(i)++;
        }
    }
    return i;
}

template<class T>
T Stats<T>::points(bool win){
    if (win)
    {
        point++;
    }
    return point;
};

template<class T>
vector<string> Stats<T>::names;
template<class T>
vector<T> Stats<T>::wins;
template<class T>
vector<T> Stats<T>::losses;


#endif /* STATS_H */
#endif
