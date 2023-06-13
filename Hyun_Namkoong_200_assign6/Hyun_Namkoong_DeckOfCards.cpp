//
//  Hyun_Namkoong_DeckOfCards.cpp
//  Hyun_Namkoong_200_assign6
//
//  Created by Hyun Namkoong on 4/2/23.
//

#include "Hyun_Namkoong_DeckOfCards.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>

DeckOfCards::DeckOfCards() {
    currentCard = 0;

    for (int count = 0; count < 52; count++) {
        deck.push_back(Card(count % 13, count / 13));
    }
}

void DeckOfCards::shuffle() {
    srand(static_cast<unsigned int>(time(0)));
    for (int first = 0; first < 52; first++) {
        int second = rand() % 52;
        std::swap(deck[first], deck[second]);
    }
}

Card DeckOfCards::dealCard() {
    return deck[currentCard++];
}

bool DeckOfCards::moreCards() {
    return currentCard < 52;
}

