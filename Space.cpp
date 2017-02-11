//
//  Space.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Space.h"
#include <iostream>


void Space::ShowItems() {
    if(items.size() == 0) {
        std::cout << "There are currently no items to pick up." <<std::endl;
        return;
    }
    
    for(int i = 0; i < items.size(); i++) {
        std::cout << i << ". " << items[i]->GetName() << std::endl;
    }
}


void Space::ShowConnectedSpaces() {
    for(int i = 0; i < spaces.size(); i++) {
        std::cout << i << ". " << spaces[i]->GetName() << std::endl;
    }
}


void Space::AddItem(Item *newItem) {
    items.push_back(newItem);
}


void Space::AddSpace(Space *newSpace) {
    spaces.push_back(newSpace);
}

std::string Space::GetName() {
    return name;
}

Space * Space::GetSpace(int index) {
    
    return spaces[index];
}

Item * Space::GetItem(int index) {
    Item *temp = items[index];
    items.erase(items.begin() + index);
    return temp;
}

