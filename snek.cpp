#include <iostream>
#include <conio.h>
#include <windows.h>
#include "snek.h"
using namespace std;


// Constructor
Snek::Snek ()
{
    char snekBodyChar[10] = {'.','O','O','O','O','O','O','O','O','@'};
    cout << "A snek object was born!" << endl;
    cout << "size of snek body: " << sizeof(snekBodyChar) << endl;
    cout << "snek's body chars:  ";
    // DISPLAY the Snek starting body type
    for (int i = 0; i < sizeof(snekBodyChar); i++)
    {
        cout <<  snekBodyChar[i];
    }
    cout << "\n";

    // SET Snek starting position on board
    for (int j = 0; j < sizeof(snekBodyChar); j++)
    {
        snekBodyPos[j][0] = 9;
        snekBodyPos[j][1] = (18 - j);
    }
        /*
        snekBodyPos[0][0] = 5;     //row0
        snekBodyPos[0][1] = 13;    //col0

        snekBodyPos[1][0] = 5;     //row1
        snekBodyPos[1][1] = 12;    //col1

        snekBodyPos[2][0] = 5;     //row2
        snekBodyPos[2][1] = 11;    //col2
        */

    for (int k=0; k<10 ; k++)
    {
        for (int kk=0; kk<2 ; kk++)
            cout << "[" << k << "]" << "[" << kk << "] = " << snekBodyPos[k][kk] << endl;
    }

}

// Destructor
Snek::~Snek() { cout << "A snek Died!" << endl; }



void moveHeadUp(Snek& tmpS)
{
    //update all the body positions except for the head
    updateSnekBody(tmpS);
    // move head last
    tmpS.snekBodyPos[0][0] -= 1;
}

void moveHeadDown(Snek& tmpS)
{
    //update all the body positions except for the head
    updateSnekBody(tmpS);
    //move head last
    tmpS.snekBodyPos[0][0] += 1;
}

void moveHeadLeft(Snek& tmpS)
{
    //update all the body positions except for the head
    updateSnekBody(tmpS);
    //move head last
    tmpS.snekBodyPos[0][1] -= 1;
}

void moveHeadRight(Snek& tmpS)
{
    //update all the body positions except for the head
    updateSnekBody(tmpS);
    //move head last
    tmpS.snekBodyPos[0][1] += 1;
}

void updateSnekBody(Snek& tmpSS)
{
    tmpSS.snekBodyPos[9][0] = tmpSS.snekBodyPos[8][0];
    tmpSS.snekBodyPos[9][1] = tmpSS.snekBodyPos[8][1];
    tmpSS.snekBodyPos[8][0] = tmpSS.snekBodyPos[7][0];
    tmpSS.snekBodyPos[8][1] = tmpSS.snekBodyPos[7][1];
    tmpSS.snekBodyPos[7][0] = tmpSS.snekBodyPos[6][0];
    tmpSS.snekBodyPos[7][1] = tmpSS.snekBodyPos[6][1];
    tmpSS.snekBodyPos[6][0] = tmpSS.snekBodyPos[5][0];
    tmpSS.snekBodyPos[6][1] = tmpSS.snekBodyPos[5][1];
    tmpSS.snekBodyPos[5][0] = tmpSS.snekBodyPos[4][0];
    tmpSS.snekBodyPos[5][1] = tmpSS.snekBodyPos[4][1];
    tmpSS.snekBodyPos[4][0] = tmpSS.snekBodyPos[3][0];
    tmpSS.snekBodyPos[4][1] = tmpSS.snekBodyPos[3][1];
    tmpSS.snekBodyPos[3][0] = tmpSS.snekBodyPos[2][0];
    tmpSS.snekBodyPos[3][1] = tmpSS.snekBodyPos[2][1];
    tmpSS.snekBodyPos[2][0] = tmpSS.snekBodyPos[1][0];
    tmpSS.snekBodyPos[2][1] = tmpSS.snekBodyPos[1][1];
    tmpSS.snekBodyPos[1][0] = tmpSS.snekBodyPos[0][0];
    tmpSS.snekBodyPos[1][1] = tmpSS.snekBodyPos[0][1];
}

/* void checkSnekBounds(Snek& tmpSSS)
{
    string sBounds = "Nothing Here";

    int tHeadRow = tmpSSS.snekBodyPos[0][0];
    int tHeadCol = tmpSSS.snekBodyPos[0][1];

    if ((tHeadRow-1) < 0) { sBounds = "out"; }
    else if ((tHeadRow+1) > 49) { sBounds = "out"; }
    else if ((tHeadCol-1) < 0) { sBounds = "out"; }
    else if ((tHeadCol+1) < 19) { sBounds = "out"; }
    else { sBounds = "in"; }

    return sBounds;
}
*/
