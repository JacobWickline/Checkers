#ifndef PIECES_H
#define PIECES_H

#endif // PIECES_H

#include <iostream>
#include <string.h>

using namespace std;

class Pieces {
public:

    string getLocation() {
        return(xCoord, yCoord);
    }

    Pieces(string xCoord, string yCoord, string playerColor); // constructor for pieces

    Pieces();




private:
    // statuses for all the pieces
    bool kingStat = false;
    bool pieceStat = true;
    string xCoord;
    string yCoord;
    string playerColor;



};




/*

Pieces piece1 = Pieces('SomeNum', 'SomeLetter', 'SomeColor')

*/
