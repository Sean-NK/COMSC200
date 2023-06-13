//
//  app.cpp
//  Hyun_Namkoong_200_assign2
//
//  Created by Hyun Namkoong on 2/18/23.
//

#include<iostream>
#include <cstdlib>
#include <ctime>
#include "Die.cpp"
using namespace std;

//main function
int main(){
    
    //create comp and player object
    Die player(6),comp(6);
    
    //infinite loop
    while(1){
            
        //both comp and player rolls twice
        comp.roll();
        comp.roll();
        player.roll();
        player.roll();
        
        //if any of them reaches a score higher than 21 break infinite loop
        if(player.getValue()>21 || comp.getValue()>21)
            break;
        
        //get a user input to continue or not
        char c;
        cout<<"Your score is : "<<player.getValue();
        cout<<"\nDo you want to roll again? press 'y' for yes, 'n' for no : ";
        cin>>c;
        //if user doesn't want to continue, break infinite loop
        if(c == 'n')
            break;
        
    }
    
    //print both player's score
    cout<<"\n\nComputer's score : "<<comp.getValue();
    cout<<"\nYour score : "<<player.getValue();
    
    
    //declare result based on condition
    if(comp.getValue()> 21 && player.getValue()>21)
        cout<<"\nBoth went above 21! So it's a draw!";
    else if(comp.getValue()> 21)
        cout<<"\nYou win, as computer went above 21";
    else if(player.getValue()>21)
        cout<<"\nComputer wins, as you went above 21";
    else if(comp.getValue() == player.getValue())
        cout<<"\nIt's a draw!";
    else if(comp.getValue() > player.getValue())
        cout<<"\nComputer wins!";
    else
        cout<<"\nYou win!";
    
    return 0;
    
}
