//
//  Hyun_Namkoong_DeckOfCards.hpp
//  Hyun_Namkoong_200_assign6
//
//  Created by Hyun Namkoong on 4/2/23.
//

#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "Hyun_Namkoong_Card.h"
#include <vector>

class DeckOfCards {
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();

private:
    std::vector<Card> deck;
    int currentCard;
};

#endif
