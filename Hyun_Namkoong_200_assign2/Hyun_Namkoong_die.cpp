//
//  Die.cpp
//  Hyun_Namkoong_200_assign2
//
//  Created by Hyun Namkoong on 2/18/23.
//

#include "Die.hpp"
#include <stdlib.h>
#include<time.h>

//constructor
Die::Die(int){
    //sets sides as 6
    sides = 6;
    //generates a random pattern for rand
    srand(static_cast<unsigned int>(time(0)));
}

//rolls a dice
void Die::roll(){
    //adds a random dice value (1 - 6) to value
    value += (rand()%sides)+1;
}

//get no of sides
int Die::getSides(){
    return sides;
}

//get value
int Die :: getValue(){
    return value;
}
