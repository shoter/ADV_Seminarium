#pragma once
#include "item.h"

class HatFactory
{
public :
    Hat make()
    {
        return Hat( 1, "Super Hat", 3 );
    }
};

class ItemFactory
{
public :
    Item make()
    {
        return Item(5, "something");
    }
};
