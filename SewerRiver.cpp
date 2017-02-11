//
//  SewerRiver.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "SewerRiver.h"
#include <iostream>
#include "Player.h"


SewerRiver::SewerRiver(std::string name, Item* vessel) {
    this->name = name;
    this->floatingDevice = vessel;
}


void SewerRiver::Special() {
    std::cout << "Let's travel onward in our plastic bowl across the sewer waste-river!\n" << std::endl;
    std::cout << "We have made it halfway across!" << std::endl;
}


int SewerRiver::ShowChallenge(Player *thePlayer) {

    bool hasKey = thePlayer->Contains(floatingDevice);
    
    if(!hasKey) {
        std::cout << "We dont have a way to get across! Let's keep searching for something we can float across in." << std::endl;
        return 0;
    } else {
        return 1;  
    
    }
}