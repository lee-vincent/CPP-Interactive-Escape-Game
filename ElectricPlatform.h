//
//  ElectricPlatform.hpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef ElectricPlatform_h
#define ElectricPlatform_h

#include <stdio.h>
#include "Space.h"
#include <string>
#include "Item.h"


class ElectricPlatform: public Space {
    
private:
    Item *insulator;
    
    
public:
    ElectricPlatform(std::string name, Item *insulator);
    virtual void Special();
    virtual int ShowChallenge(Player *player);
};


#endif /* ElectricPlatform_h */
