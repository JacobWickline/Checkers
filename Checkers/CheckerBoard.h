#ifndef CHECKERBOARD_H
#define CHECKERBOARD_H

#endif // CHECKERBOARD_H

#include <iostream>
#include <cstring> // this is for converting the player's input to upper case, just like in python
#include <string.h>

using namespace std;

class CheckerBoard {
public:

    bool validLocationCheck(string coords) {

        if (coords.length() > 2) {
            return false;
        }

        char* char_array = new char[coords.length() + 1];
        coords.copy(char_array, coords.size());

        char yCoordUpper = toupper(char_array[0]);
        int yCoord = yCoordUpper;
        yCoord = yCoord - 65;
        if (yCoord > 7 || yCoord < 0) {
            return false;
        }

        int xCoord = (int)char_array[1];
        xCoord = (xCoord - '0') - 1;
        if (xCoord > 7 || xCoord < 0) {
            return false;
        }

        bool checkerBoardCheck = checkerBoard[yCoord][xCoord];

        return checkerBoardCheck;

    }

    void checkerBoardPrint(){
        int numY = 1;
                for (int i = 0; i < 8; i++) {
                    cout << numY << "  ";
                    numY++;
                    for (int j = 0; j < 8; j++) {
                        //cout << playerBoard[i][j];
                        cout << " ";
                    }
                    cout << endl;
                }
                cout << "\n   A B C D E F G H" << endl;
    }

private:
    // this is the board of valid positioning, since the pieces can only move in one spot, this makes sure the player can not enter an invalid coordinate
    bool checkerBoard[8][8] = {
        {false,true,false,true,false,true,false,true},
        {true,false,true,false,true,false,true,false},
        {false,true,false,true,false,true,false,true},
        {true,false,true,false,true,false,true,false},
        {false,true,false,true,false,true,false,true},
        {true,false,true,false,true,false,true,false},
        {false,true,false,true,false,true,false,true},
        {true,false,true,false,true,false,true,false},
    };

};
