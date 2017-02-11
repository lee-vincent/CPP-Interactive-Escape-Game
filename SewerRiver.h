//
//  SewerRiver.hpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef SewerRiver_h
#define SewerRiver_h

#include <stdio.h>
#include "Space.h"
#include <string>
#include "Item.h"


class SewerRiver: public Space {
    
private:
    Item *floatingDevice;
    
    
public:
    SewerRiver(std::string name, Item* vessel);
    virtual void Special();
    virtual int ShowChallenge(Player *player);
};


#endif /* SewerRiver_h */
