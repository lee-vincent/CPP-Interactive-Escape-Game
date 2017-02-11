//
//  Item.cpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Item.h"


std::string Item::GetName() {
    return name;
}



Item::Item (std::string name) {
    this->name = name;
}