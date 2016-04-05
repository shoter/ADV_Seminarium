#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 3> firstArray { {3, 2, 1} }; //Podwójny nawias klamrowy wymagany w C++11 ( nie w C++14 )
    std::array<int, 3> secondArray = {3, 2, 1}; // Nie jest za to wymagany po =

    for(size_t i = 0; i < firstArray.size(); ++i)
    {
        std::cout << firstArray.at(i) << std::endl;
    }

    std::cin.get();
    return 0;
}
