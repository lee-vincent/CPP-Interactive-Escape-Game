//
//  Space.hpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Space_h
#define Space_h

#include <stdio.h>
#include <vector>
#include "Item.h"
#include <string>

class Player;

class Space {


protected:
    std::vector<Space *> spaces;
    std::vector<Item *> items;
    std::string name;
    
    
    
public:
    void ShowItems();
    void ShowConnectedSpaces();
    void AddItem(Item *newItem);
    void AddSpace(Space *newSpace);
    virtual void Special() = 0;
    std::string GetName();
    virtual int ShowChallenge(Player *player) = 0;
    Space * GetSpace(int index);
    Item * GetItem(int index);

};

#endif /* Space_h */
