//
//  Hyun_Namkoong_200_assign6.cpp
//  Hyun_Namkoong_200_assign6
//
//  Created by Hyun Namkoong on 4/2/23.
//

#include <iostream>
#include <iomanip>
#include "Hyun_Namkoong_DeckOfCards.h"

int main() {
    DeckOfCards deckOfCards;
    deckOfCards.shuffle();

    for (int i = 0; i < 52; i++) {
        std::cout << std::left << std::setw(19) << deckOfCards.dealCard().toString();
        if ((i + 1) % 4 == 0) {
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;
    return 0;
}

