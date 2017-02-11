//
//  ElectricPlatform.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "ElectricPlatform.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>

ElectricPlatform::ElectricPlatform(std::string name, Item *insulator) {
    this->name = name;
    this->insulator = insulator;
}

void ElectricPlatform::Special() {
    std::cout << "We have made a bridge over the electric wires with the leather belt. We are safe to move on!" << std::endl;

}



int ElectricPlatform::ShowChallenge(Player *player) {
    std::cout << "This platform has electric wires running across that I can't jump over." << std::endl;
    std::cout << "Lets look through our items to see if anything can help us cross." << std::endl;
    player->ShowItems();
    int choice = 0;
    std::cout << "Enter the number of an item you think will work." << std::endl;
    std::cout << "Enter choice: ";
    std::cin >> choice;
    
    if(player->GetItem(choice) == insulator) {
        std::cout << "We can lay the leather belt across the wires and walk over! Good thinking!" << std::endl;
        return 1;
    } else {
        std::cout << "You got us electrocuted!" << std::endl;
        exit(0);    
    }
    
    
}