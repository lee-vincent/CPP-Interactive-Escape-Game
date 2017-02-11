//
//  LadderPlatform.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "LadderPlatform.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>

LadderPlatform::LadderPlatform(std::string name, Item *rope) {
    this->name = name;
    this->rope = rope;
}

void LadderPlatform::Special() {

    std::cout << "Thank you so much you have helped me make it back to the surface so I can be with my family!" << std::endl;
    std::cout << "Game Over - You Win!" << std::endl;
    exit(1);
}


int LadderPlatform::ShowChallenge(Player *player) {
    std::cout << "This platform has a ladder that runs up to the surface, but it is too high for me to reach." << std::endl;
    std::cout << "Lets look through our items to see if anything can help us reach the ladder." << std::endl;
    player->ShowItems();
    int choice = 0;
    std::cout << "Enter the number of an item you think will work." << std::endl;
    std::cout << "Enter choice: ";
    std::cin >> choice;
    
    if(player->GetItem(choice) == rope) {
        std::cout << "We can hook the shoelace onto the ladder and climb it like a rope! Good thinking!" << std::endl;
        return 1;
    } else {
        std::cout << "Oh no I cant get out and will be washed away by the sewer flush!" << std::endl;
        exit(0);
    }

}