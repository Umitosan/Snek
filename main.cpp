#include <iostream>
#include <conio.h>
#include <windows.h>
#include "board.h"
#include "snek.h"
using namespace std;

int main()
{
    //construct new board
    Board myBoard;

    //construct the player's snek for the first time
    Snek playerSnek;

    //Always want to display the last button pressed
    string lastPressed = " nothing here ";

    //assign correct chars for snake body
    for (int i = 0; i < sizeof(playerSnek.snekBodyChar); i++)
    {
        playerSnek.snekBodyChar[i] = 'O';
    }
    //overwrite and set head char
     playerSnek.snekBodyChar[0] = '@';
     //overwrite and set tail char
     playerSnek.snekBodyChar[9] = '.';

    long keyPress = 0;
    //while (keyPress != 'p' && keyPress != 'q'
    while (keyPress != 112 || keyPress != 115)
    {
        keyPress = getche();  //look for user keypress
        switch(keyPress)  //Do stuff based on keypress
        {
            //WASD keys
            case 119:  // 'w' = 119
                moveHeadUp(playerSnek);  lastPressed = "[ W ]";
                break;
            case 115:  // 's' = 115
                moveHeadDown(playerSnek);  lastPressed = "[ S ]";
                break;
            case 100:  // 'd' = 100
                moveHeadRight(playerSnek);  lastPressed = "[ D ]";
                break;
            case 97:  // 'a' = 97
                moveHeadLeft(playerSnek);  lastPressed = "[ A ]";
                break;
            //ARROW keys
            case 72:  // UP arrow key = 72
                moveHeadUp(playerSnek);  lastPressed = "[ UP ]";
                break;
            case 80:  // DOWN arrow key = 80
                moveHeadDown(playerSnek);  lastPressed = "[ DOWN ]";
                break;
            case 77:  // LEFT arrow key = 75
                moveHeadRight(playerSnek);  lastPressed = "[ RIGHT ]";
                break;
            case 75:  // RIGHT arrow key = 77
                moveHeadLeft(playerSnek);  lastPressed = "[ LEFT ]";
                break;
            default: break;


        }
    updateBoard(myBoard, playerSnek);
    printBoard(myBoard, lastPressed);
    }

return 0;
};
