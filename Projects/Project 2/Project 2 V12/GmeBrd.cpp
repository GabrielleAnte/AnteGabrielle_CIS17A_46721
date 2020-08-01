#include "GmeBrd.h"

/**Game Board Default Constructor*/
GmeBrd::GmeBrd()
{
    row = 0;
    col=0;
    mine=0;
    c = new Cell*[row];
    for (int i = 0; i < row; i++) {
        *(c + i) = new Cell [col];
    }
}

/**Game Board Constructor #2*/
GmeBrd::GmeBrd(int r, int cl, int m)
{
    row = r;
    col=cl;
    mine=m;
    c = new Cell*[row];
    for (int i = 0; i < row; i++) {
        *(c + i) = new Cell [col];
    } 
}