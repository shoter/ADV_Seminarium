#include <iostream>
#include <Windows.h> //tylko na windows :(
#include <chrono>
#include <random>

#define PrintVAR(x) std::cout << #x << " : " << x << std::endl

int main()
{
    unsigned timeSeed = std::chrono::system_clock::now().time_since_epoch().count();
    POINT mousePosition;

    GetCursorPos(&mousePosition);

    PrintVAR(timeSeed);
    PrintVAR(mousePosition.x);
    PrintVAR(mousePosition.y);

    unsigned mouseX = mousePosition.x;
    unsigned mouseY = mousePosition.y;

    std::seed_seq seq{timeSeed, mouseX, mouseY}; //std::initializer_list<T>. Mozna też użyć iteratora
    std::vector<std::uint32_t> seeds(10);
    seq.generate(seeds.begin(), seeds.end());
    for(auto seed : seeds)
    {
        std::default_random_engine generator(seed);
        int number = generator();
        std::cout << "seed[" << seed << "] generated " << number << std::endl;
    }


    std::cin.get();
    return 0;
}
