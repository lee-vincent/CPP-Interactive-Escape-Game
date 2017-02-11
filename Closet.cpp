//
//  Closet.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Closet.h"
#include <iostream>
#include "Player.h"

Closet::Closet(std::string name) {
    this->name = name;
}

void Closet::Special() {
    std::cout << "\nI'm trying to squeeze myself underneath the door...\n" << std::endl;
    std::cout << "Success! We are now in the " << name << std::endl;

}


int Closet::ShowChallenge(Player *player) {
    
    int choice;
    std::cout << "The door is closed. Should we try to wriggle underneath the door?" << std::endl;
    std::cout << "Yes - 1\nNo - 2\nEnter Choice: ";
    std::cin >> choice;
    
    if(choice == 1) {
        std::cout << "\nLet's try it..." << std::endl;
        return 1;
        
    } else {
        std::cout << "OK we won't try to squeeze under the door.." << std::endl;
        return 0;
    }

}