#ifndef PLAYERBOARD_H
#define PLAYERBOARD_H

#endif // PLAYERBOARD_H

#include <iostream>
#include <string.h>

using namespace std;

class PlayerBoard {
    public:
    void checkerBoardPrint(){
        int numY = 1;
                for (int i = 0; i < 8; i++) {
                    cout << numY << "  ";
                    numY++;
                    for (int j = 0; j < 8; j++) {
                        cout << playerBoard[i][j];
                        cout << " ";
                    }
                    cout << endl;
                }
                cout << "\n   A B C D E F G H" << endl;
    }


    private:
    int playerBoard[8][8] = {
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {2,0,2,0,2,0,2,0},
        {0,2,0,2,0,2,0,2},
        {2,0,2,0,2,0,2,0}
    };

};
