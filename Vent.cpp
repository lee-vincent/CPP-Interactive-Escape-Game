//
//  Vent.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Vent.h"
#include <iostream>
#include "Player.h"


Vent::Vent(std::string name){
    this->name = name;
}


void Vent::Special(){
    std::cout << "Unscrewing the bolts in the vent...\n" << std::endl;
    std::cout << "Success! We are now in the vent!" << std::endl;
}


int Vent::ShowChallenge(Player *player){
    int choice;
    std::cout << "The vent is too small to squeeze through. Should we try unscrewing the bolts?" << std::endl;
    std::cout << "Yes - 1\nNo - 2\nEnter Choice: ";
    std::cin >> choice;
    
    if(choice == 1) {
        std::cout << "Let's try it..." << std::endl;
        return 1;
        
    } else {
        std::cout << "OK we won't go into the vent." << std::endl;
        return 0;
    }
}