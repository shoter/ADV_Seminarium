#include <iostream>
#include <cmath>
#include <string>
#include "Factory.h"



template <typename FACTORY>
auto makeItem(FACTORY f) -> decltype(f.make())
{
    return f.make();
}

auto sum(int a, int b) -> int
{
    return a + b;
}

int main()
{
    HatFactory hatFactory;
    ItemFactory itemFactory;

    auto hat = makeItem(hatFactory);
    hat.print();
    std::cout << std::endl;

    auto item = makeItem(itemFactory);
    item.print();

    std::cin.get();
    return 0;
}
