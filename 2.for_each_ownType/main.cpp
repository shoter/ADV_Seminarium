#include <iostream>
#include "Backpack.h"

int main()
{
    Backpack backpack;

    Item ring = Item(5, "ring");
    Item something = Item(10, "something");

    backpack.add(ring);
    backpack.add(something);

    for(Item item : backpack)
    {
        std::cout << item.name << " - " << item.weight << std::endl;
    };

    std::cin.get();
    return 0;
}
