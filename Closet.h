//
//  Closet.hpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Closet_h
#define Closet_h

#include <stdio.h>
#include "Space.h"
#include <string>


class Closet: public Space {
    
    
    
public:
    Closet(std::string name);
    virtual void Special();
    virtual int ShowChallenge(Player *player);
};


#endif /* Closet_h */
