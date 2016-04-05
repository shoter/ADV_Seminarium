#include "vector.h"
#include <iostream>
#include <functional>

template <typename T>
auto mutliply(T first, T second) -> decltype( first * second )
{
    return first * second;
}

int main()
{
    std::cout << mutliply(2.0, 3.5) << std::endl;

    Vector first(4.0, 2.0);
    Vector second(1.0, 1.0);

    std::cout << mutliply(first, second);

    std::cin.get();
    return 0;
}
