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

/**Template class Stats */
template<class T>
class Stats
{
    private:
        static vector <T> pnts; ///< kept private, this static vector variable stores all the player's points
    protected:
        static vector <string> names; ///< this vector variable stores all the player's names
        static vector <T> wins; ///< this vector variable stores all the player's number of wins
        static vector <T> losses; ///< this vector variable stores all the player's number of losses
        T point; ///< player class accessible variable to store the player's points
        int update(string name, bool win, T pt);///<function prototype for the update function
    public:
        Stats(); ///< function prototype for the default constructor
        T points(); ///< function prototype for the points function
};

/**default constructor for the Stats class*/
template <class T>
Stats<T>::Stats()
{
    point = 0;
}

/**tracks if the player is a returning player and updates their stats, if not, they are added to the vector*/
template <class T>
int Stats<T>::update(string name, bool win, T pt)
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
            pnts.push_back(pt);
        }
        else
        {
            wins.push_back(0);
            losses.push_back(1);
            pnts.push_back(0.0);
        }
    }
    else{
        if(win)
        {
            wins.at(i)++;
            cout << wins.at(i);
            pnts.at(i)=pnts.at(i)+pt;
        }
        else
        {
            losses.at(i)++;
        }
    }
    
    point = pnts.at(i);
    return i;
}

/** increases and return the point value if the game is won; overridden by derived Player class*/
template<class T>
T Stats<T>::points(){
    bool win = true;
    if (win)
    {
        point++;
    }
    return point;
};

/** declares template vector variables, placed outside of class*/
template<class T>
vector<string> Stats<T>::names;
template<class T>
vector<T> Stats<T>::wins;
template<class T>
vector<T> Stats<T>::losses;
template<class T>
vector<T> Stats<T>::pnts;

#endif /* STATS_H */
#endif
