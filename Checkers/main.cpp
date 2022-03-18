#include <iostream>
#include <cstdlib>
#include <CheckerBoard.h>
#include <Pieces.h>
#include <PlayerBoard.h>

using namespace std;

int main()
{
    int playerPlays = 0;
    CheckerBoard checkerBoard;
    PlayerBoard playerBoard;

    cout << "Welcome to Checkers!\n\n" << "1 = Play  2 = Exit : ";
    cin >> playerPlays;

    //while(playerPlays != 1 || playerPlays != 2){
    if (playerPlays == 1) {
        system("CLS");
       playerBoard.checkerBoardPrint();
    }

    else if (playerPlays == 2) {
        cout << "Thank you for playing!" << endl;
    }

    else if (playerPlays != 1 || playerPlays != 2) {
        cout << "Invalid input, Please try again : ";
        cin >> playerPlays;
    }
    // }

    cout << checkerBoard.validLocationCheck("a1");

    return 0;
}
