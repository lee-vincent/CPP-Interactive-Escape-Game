//
//  Player.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Player.h"
#include <iostream>




Player::Player (Space *space) {
    currentSpace = space;
    previousSpace = space;
    gameStartTime = clock();
}


void Player::MoveTo(Space * space) {
    int choice = 1;
    std::cout << "Let's move to the " << space->GetName() << std::endl;
    choice = space->ShowChallenge(this);
    
    if(choice == 1) {
        previousSpace = currentSpace;
        currentSpace = space;
        space->Special();
    
    } else {
        std::cout << "Let's go back to the " << currentSpace->GetName() << std::endl;
    }
    
    GetDetails();
    
}

void Player::GetDetails() {
    clock_t temp = clock() - gameStartTime;
    std::cout << std::endl;
    std::cout << temp << std::endl;

    std::cout << "Our current location is the: " << currentSpace->GetName() << ".\n" << std::endl;
    std::cout << "Here are the items we can pick up: " << std::endl;
    currentSpace->ShowItems();
    std::cout << "\nand here are the spaces we could move to next: " << std::endl;
    GetCurrentSpace()->ShowConnectedSpaces();
    
    int choice = 0;
    std::cout << "\nWould you like to pick something up or move locations?\n" << std::endl;
    std::cout << "Pick-up items - 1\nMove Location - 2\nEnter choice: ";
    std::cin >> choice;
    
    int secondChoice = 0;
    if(choice == 1) {
        
        std::cout << "\nOK. Which item do you want to pick up? Enter its number from above: ";
        std::cin >> secondChoice;
        AddItem(GetCurrentSpace()->GetItem(secondChoice));
        GetDetails();

    
    } else {
        std::cout << "\nOK. Where do you want to move? Enter the number corresponding to the space you want to move to: ";
        std::cin >> secondChoice;
        MoveTo(GetCurrentSpace()->GetSpace(secondChoice));
    
    }
    


}


Space * Player::GetCurrentSpace() {
    return currentSpace;
}

Space * Player::GetPreviousSpace() {
    return previousSpace;
}


Item * Player::GetItem(int index) {
    return playerItems[index];

}

void Player::ShowItems() {
    for(int i = 0; i < playerItems.size(); i++) {
        std::cout << i << ". " << playerItems[i]->GetName() << std::endl;
    }
}

void Player::AddItem (Item *item) {
    if(playerItems.size() > 3) {
        int choice = 0;
        std::cout << "I can only carry 4 items! Do you want to drop an item?\n\nYes - 1\nNo - 2\nEnter Choice: ";
        std::cin >> choice;
        
        if(choice == 1) {
            int dropChoice = 0;
            ShowItems();
            std::cout << "Enter the number of the item you wish to drop from above or 7 to cancel\nEnter Choice: ";
            std::cin >> dropChoice;
            if(dropChoice == 7) {
                std::cout << "OK. We wont pick anything up or drop anything\n" << std::endl;
                GetDetails();
            } else {
                std::cout << "Dropping the " << playerItems[dropChoice]->GetName() << "\n" << std::endl;
                playerItems.erase(playerItems.begin() + dropChoice);
                AddItem(item);
            }
        } else {
            std::cout << "OK. We wont pick anything up or drop anything\n" << std::endl;
            GetDetails();
        }
    } else {
        playerItems.push_back(item);
        std::cout << "\nSuccessfully picked up " << item->GetName() << std::endl;
    }
    
}

bool Player::Contains(Item *key) {
    for(int i = 0; i < playerItems.size(); i++) {
        if(playerItems[i] == key) {
            return true;
        }
    }
    
    return false;

}




