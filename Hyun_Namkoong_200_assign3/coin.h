//
//  coin.hpp
//  Hyun_Namkoong_200_assign3
//
//  Created by Hyun Namkoong on 3/5/23.
//
#ifndef coin.h
#define coin.h
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

//Coin class
class Coin {

    //required variable to store coin's side
    string side;

public:

    //public method prototypes
    Coin();
    void toss();
    string getSideUp();
};

#endif

