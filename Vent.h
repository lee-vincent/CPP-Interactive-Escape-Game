//
//  Vent.hpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Vent_h
#define Vent_h

#include <stdio.h>
#include "Space.h"
#include <string>


class Vent: public Space {
    
    

public:
    Vent(std::string name);
    virtual void Special();
    virtual int ShowChallenge(Player *player);
};

#endif /* Vent_h */
