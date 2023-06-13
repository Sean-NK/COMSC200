//
//  coin.cpp
//  Hyun_Namkoong_200_assign3
//
//  Created by Hyun Namkoong on 3/5/23.
//

#include "coin.h"


Coin::Coin() {
    //tossing the coin
    toss();
}

//this method will toss the coin, update sideUp variable
void Coin::toss() {

    //gerate the random number
    int i = rand() % 2;

    //if i is 0, setting sideup as heads
    if (i == 0) {
        side = "heads";
    }
    //else i is none 0, then setting sideup as tails
    else {
        side = "tails";
    }
}

string Coin::getSideUp() {
    return side;
}
