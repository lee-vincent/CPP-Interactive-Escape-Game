//
//  Item.hpp
//  final
//
//  Created by Vincent Lee on 12/8/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Item_h
#define Item_h

#include <stdio.h>
#include <string>


class Item {
    
private:
    std::string name;

public:
    Item(std::string name);
    
    std::string GetName();


};

#endif /* Item_h */
