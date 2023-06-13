//
//  Hyun_Namkoong_Card.hpp
//  Hyun_Namkoong_200_assign6
//
//  Created by Hyun Namkoong on 4/2/23.
//

#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
public:
    Card(int face, int suit);
    std::string toString();

private:
    int face;
    int suit;
    static const std::string faces[];
    static const std::string suits[];
};

#endif

