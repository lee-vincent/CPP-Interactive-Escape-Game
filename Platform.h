//
//  Platform.hpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Platform_h
#define Platform_h

#include <stdio.h>
#include "Space.h"
#include <string>

class Platform: public Space {

    
public:
    Platform(std::string name);
    virtual void Special();
    virtual int ShowChallenge(Player *player);
    

};

#endif /* Platform_h */
