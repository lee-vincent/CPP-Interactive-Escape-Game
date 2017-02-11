//
//  main.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include <iostream>
#include "Space.h"
#include "Item.h"
#include "Vent.h"
#include "Closet.h"
#include "Platform.h"
#include "SewerRiver.h"
#include "ElectricPlatform.h"
#include "LadderPlatform.h"
#include "Player.h"

int main() {
    int cheat = 1;
    std::cout << "If you want to know how to beat the game, enter 1.\notherwise enter 2\nEnter Choice: ";
    std::cin >> cheat;
    if(cheat == 1) {
        std::cout << "To beat the game you need to pick up 3 specific items and use them at the right time to escape the sewer." << std::endl;
        std::cout << "Go into the first vent, say Yes to unscrewing the bolts, and pick-up the shoelace." << std::endl;
        std::cout << "Go back to the starting platform." << std::endl;
        std::cout << "Go into the utility office, say Yes to wriggling under the door and pick-up the plastic bowl." << std::endl;
        std::cout << "Go back to the starting platform." << std::endl;
        std::cout << "Go into the abandoned office, say Yes to wriggling under the door and pick-up the belt." << std::endl;
        std::cout << "Go back to the starting platform." << std::endl;
        std::cout << "Go to the waste-river." << std::endl;
        std::cout << "Go to the platform with electric wires." << std::endl;
        std::cout << "Use the belt you picked-up to cross the electric wires." << std::endl;
        std::cout << "Go to the platform with ladder to the surface." << std::endl;
        std::cout << "Use the shoe lace as a rope to climb up to the ladder and you win." << std::endl;
    }
    
    //initialize all items
    Item *playingCard = new Item("playing card");
    Item *shoeLace = new Item("shoe lace");
    Item *cup = new Item("cup");
    Item *marble = new Item("marble");
    Item *plasticBowl = new Item("plastic bowl");
    Item *brick = new Item("brick");
    Item *belt = new Item("leather belt");
    
    //initialize all spaces and add their items
    Platform *mainPlatform = new Platform("starting platform");
    
    Vent *vent1 = new Vent("first vent");
    vent1->AddItem(playingCard);
    vent1->AddItem(shoeLace);
    
    Vent *vent2 = new Vent("inner vent");
    vent2->AddItem(marble);
    
    Closet *utilityCloset = new Closet("utility closet");
    utilityCloset->AddItem(cup);
    utilityCloset->AddItem(plasticBowl);
    
    Closet *officeCloset = new Closet("abandoned office");
    officeCloset->AddItem(brick);
    officeCloset->AddItem(belt);
    
    SewerRiver *river = new SewerRiver("waste river", plasticBowl);
    ElectricPlatform *electricP = new ElectricPlatform("platform with electric wires", belt);
    LadderPlatform *ladderP = new LadderPlatform("platform with ladder to surface", shoeLace);
    
    //set up all relationships
    mainPlatform->AddSpace(vent1);
    mainPlatform->AddSpace(utilityCloset);
    mainPlatform->AddSpace(river);
    mainPlatform->AddSpace(officeCloset);
    
    vent1->AddSpace(mainPlatform);
    
    utilityCloset->AddSpace(mainPlatform);
    utilityCloset->AddSpace(vent2);
    
    vent2->AddSpace(utilityCloset);
    vent2->AddSpace(officeCloset);
    
    officeCloset->AddSpace(mainPlatform);
    officeCloset->AddSpace(vent2);
    
    river->AddSpace(mainPlatform);
    river->AddSpace(electricP);
    
    electricP->AddSpace(river);
    electricP->AddSpace(ladderP);
    
    ladderP->AddSpace(electricP);
    
    //create main player
    Player player(mainPlatform);

    std::cout << "Hi! I'm Louie, a rat from the surface who fell through a storm drain into the sewer." << std::endl;
    std::cout << "Please help me escape this place so I can see my family again..." << std::endl;
    std::cout << "We need to be quick though because the next sewer flush could wash me away any minute!.\n" << std::endl;
    std::cout << "Looks like there is a ladder on the other side of this sewer-river, but it is too high off" << std::endl;
    std::cout << "the ground for me to reach. I also see some live electric wires on the ground I'll need to avoid." << std::endl;
    std::cout << "I can't swim, so I'll need something to help me get across the fast moving water. Let's explore this" << std::endl;
    std::cout << "side of the sewer for some supplies.\n" << std::endl;
    
    player.GetDetails();
        
    return 0;
}
