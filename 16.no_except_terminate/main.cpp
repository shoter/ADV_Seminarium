#include <iostream>

void killme() noexcept
{
    throw "kill me"; // std::terminate -> std::abort
};

int main()
{
    try
    {
        killme();
    }
    catch(...) {} //nawet catch nas nie uratuje :(
    std::cout << "I am alive!" << std::endl;
    std::cin.get();

    return 0;
}
