//
//  Platform.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Platform.h"
#include "Player.h"

Platform::Platform(std::string name) {
    this->name = name;
}


void Platform::Special() {}
int Platform::ShowChallenge(Player *player) {return 1;}