#include <iostream>
#include <conio.h>
#include <windows.h>
#include "board.h"
using namespace std;



//Constructor definition
Board::Board()
{
    cout << "A new Board object was created!" << endl;

    tR = 20;
    tC = 50;

    //FILL the board with char
    for (int k=0; k < tR; k++ )
    {
         for (int kk = 0; kk < tC; kk++)
         {
              boardChar[k][kk] = ' ';
         }
    }


    //PRINT the board
    cout << "|--------------------------------------------------|" << endl;
    for (int i=0; i<tR; i++ )
    {
        cout << "|";
             for (int ii=0; ii<tC; ii++)
             {

                  cout << boardChar[i][ii];
             }
        cout << "|\n";
    }
    cout << "|--------------------------------------------------|" << endl;
    cout << "\n";
    //End print
};

// Destructor definition
Board::~Board() { };


void updateBoard(Board& tB2, Snek& tS)
{
    //add the snek object chars to the board object chars at the correct coordinates
    for (int k=0; k<sizeof(tS.snekBodyChar); k++)
    {

        //save the snake body char element to board's char map
        tB2.boardChar [ (tS.snekBodyPos[k][0]) ][ (tS.snekBodyPos[k][1]) ] = tS.snekBodyChar[k];

    }

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

        snekBodyPos[4][0] = row5
        snekBodyPos[4][1] = col5

        snekBodyPos[5][0] = row6
        snekBodyPos[5][1] = col6

        snekBodyPos[6][0] = row7
        snekBodyPos[6][1] = col7

        snekBodyPos[7][0] = row8
        snekBodyPos[7][1] = col9

        snekBodyPos[8][0] = row9
        snekBodyPos[8][1] = col9

        snekBodyPos[9][0] = row10
        snekBodyPos[9][1] = col10
    */
};



//printBoard takes a Board object and temporarily assigns that to 'foo'
void printBoard(Board tB1, string& tLP)
{
    system("cls");
    cout << "i'm a board!    " << "Last button pressed: " << tLP << endl;

    //Print all board chars 1 by 1
    cout << "|--------------------------------------------------|" << endl;
    for (int i=0; i<tB1.tR; i++ )

    {
    cout << "|";
         for (int ii=0; ii<tB1.tC; ii++)
         {
              //Print the actual current state of the board
              cout << tB1.boardChar[i][ii];
         }
    cout << "|\n";
    }
    cout << "|--------------------------------------------------|" << endl;
    //End print
};









