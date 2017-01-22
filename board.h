#ifndef BOARD_H
#define BOARD_H
#include "snek.h"
using namespace std;

class Board
{
    public:
        int tR;
        int tC;
        char boardChar[20][50] = {{}};
        // Constructor
        Board ();
        // Destructor
        ~Board ();
        // Member functions
};

void updateBoard(Board& tB2, Snek& tS);
void printBoard(Board tB1, string& tLP);
#endif // BOARD_H
