//
//  Hyun_Namkoong_200_assign3.cpp
//  Hyun_Namkoong_200_assign3
//
//  Created by Hyun Namkoong on 3/5/23.
//

#include "coin.h"
#include<iomanip>

int main() {

    //generating the random number
    srand(time(NULL));

    //initializing variables
    double playerBalance = 0; //initial balance of player
    double computerBalance = 0; //initial balance of computer
    Coin quarter;    //denoting each type of coins
    Coin dime;    //denoting each type of coins
    Coin nickel; //denoting each type of coins
    int round = 1;    //updating the round
    bool gameOver = false; //loop controller

    //fix the decimal point to 2
    cout << setprecision(2) << fixed;

    //starting prompt
    cout << "Your starting balance : $" << playerBalance << endl;
    cout << "The Computer's starting balance : $" << computerBalance << endl;

    //looping until game is over
    while (!gameOver) {

        //use the toss function to toss the coin
        quarter.toss();
        dime.toss();
        nickel.toss();

        //update player's balance if a coin's side is heads
        if (quarter.getSideUp() == "heads") {
            playerBalance += 0.25;
        }

        if (dime.getSideUp() == "heads") {
            playerBalance += 0.10;
        }

        if (nickel.getSideUp() == "heads") {
            playerBalance += 0.05;
        }

        //use the toss function again
        quarter.toss();
        dime.toss();
        nickel.toss();

        //update computer's balance if a coin's side is heads
        if (quarter.getSideUp() == "heads") {
            computerBalance += 0.25;
        }

        if (dime.getSideUp() == "heads") {
            computerBalance += 0.10;
        }

        if (nickel.getSideUp() == "heads") {
            computerBalance += 0.05;
        }

        //show balance after every round
        cout << "Your balance after round " << round << ": $" << playerBalance << endl;
        cout << "The Computer's balance after round " << round << ": $" << computerBalance << endl;

        //checking if any of them has won
        if (playerBalance >= 1 || computerBalance >= 1) {
            //game is over
            gameOver = true;
        }
        round++;
    }

    //show the final balance
    cout << "Your ending balance : $" << playerBalance << endl;
    cout << "The Computer's ending balance : $" << computerBalance << endl;

    //check who is the winner
    if (playerBalance == computerBalance) {
        //draw
        cout << "Draw! Nobody wins" << endl;
    }
    else if (playerBalance > computerBalance) {
        //player wins
        cout << "Congratulations! You won" << endl;
    }
    else {
        //computer wins
        cout << "Sorry! The computer won" << endl;
    }
}
