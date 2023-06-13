//
//  Die.hpp
//  Hyun_Namkoong_200_assign2
//
//  Created by Hyun Namkoong on 2/18/23.
//

#ifndef Die_hpp
#define Die_hpp

class Die

{

private:

    int sides; // Number of sides
    
    int value; // The die's value

public:
    
    Die(int=6);
    
    void roll();
    
    int getSides();
    
    int getValue();

};


#endif /* Die_hpp */
