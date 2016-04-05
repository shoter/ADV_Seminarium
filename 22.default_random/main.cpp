#include <iostream>
#include <random>
#include <array>
#include <iomanip>

using uint = unsigned int;

const uint RAND_COUNT = 10;

int main()
{
    std::default_random_engine generator(time(0));
    std::cout << "C++11 generator : " << std::endl;
    for(uint i = 0;i < RAND_COUNT; ++i)
    {
        std::cout << generator() << std::endl;
    }


    std::cin.get();
    return 0;
}
