//
//  LadderPlatform.hpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef LadderPlatform_h
#define LadderPlatform_h

#include <stdio.h>
#include "Space.h"
#include <string>
#include "Item.h"


class LadderPlatform: public Space {
    
private:
    Item *rope;
    
    
public:
    LadderPlatform(std::string name, Item *rope);
    virtual void Special();
    virtual int ShowChallenge(Player *player);
};

#endif /* LadderPlatform_h */
