#include <iostream>
#include <conio.h>
#include <windows.h>
#include "board.h"
#ifndef SNEK_H
#define SNEK_H
using namespace std;

class Snek
{
    public:

    char snekBodyChar[10] = {};
    int snekBodyPos[10][2] = {{}};
    /*
        snekBodyPos[0][0] = row0
        snekBodyPos[0][1] = col0

        snekBodyPos[1][0] = row1
        snekBodyPos[1][1] = col1

        snekBodyPos[2][0] = row2
        snekBodyPos[2][1] = col2

        snekBodyPos[3][0] = row3
        snekBodyPos[3][1] = col3

        snekBodyPos[3][0] = row4
        snekBodyPos[3][1] = col4

        snekBodyPos[4][0] = row0
        snekBodyPos[4][1] = col0

        snekBodyPos[5][0] = row1
        snekBodyPos[5][1] = col1

        snekBodyPos[6][0] = row2
        snekBodyPos[6][1] = col2

        snekBodyPos[7][0] = row3
        snekBodyPos[7][1] = col3

        snekBodyPos[8][0] = row4
        snekBodyPos[8][1] = col4

        snekBodyPos[9][0] = row10
        snekBodyPos[9][1] = col10
    */


    // Constructor
    Snek();

    // Destructor
    ~Snek();

    //Member functions

};

void moveHeadUp(Snek& tmpS);
void moveHeadDown(Snek& tmpS);
void moveHeadLeft(Snek& tmpS);
void moveHeadRight(Snek& tmpS);

void updateSnekBody(Snek& tmpSS);

void checkSnekBounds(Snek& tmpSSS);

#endif // SNEK_H
