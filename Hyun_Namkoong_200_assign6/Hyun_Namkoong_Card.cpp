//
//  Hyun_Namkoong_Card.cpp
//  Hyun_Namkoong_200_assign6
//
//  Created by Hyun Namkoong on 4/2/23.
//

#include "Hyun_Namkoong_Card.h"
#include <string>

const std::string Card::faces[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
const std::string Card::suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

Card::Card(int face, int suit) {
    this->face = face;
    this->suit = suit;
}

std::string Card::toString() {
    return faces[face] + " of " + suits[suit];
}

