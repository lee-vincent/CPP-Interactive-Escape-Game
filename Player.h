//
//  Player.hpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Player_h
#define Player_h

#include <stdio.h>
#include <string>
#include "Item.h"
#include <vector>
#include "Space.h"
#include <ctime>

class Player {
    
private:
    clock_t gameStartTime;
    
    Space *currentSpace;
    Space *previousSpace;
    std::vector<Item *> playerItems;
    
    
public:
    Player (Space *space);
    
    Space * GetCurrentSpace();
    Space * GetPreviousSpace();
    void ShowItems();
    void MoveTo(Space * space);
    void AddItem (Item *item);
    void GetDetails();
    bool Contains(Item *key);
    Item * GetItem(int index);
    void CheckTime();
    
};

#endif /* Player_h */
