#include <iostream>
#include <ratio>
template <typename Ratio>
void display()
{
    std::cout << Ratio::num << "/" << Ratio::den;
}

int main()
{
    typedef std::ratio<1, 3> jednaTrzecia;
    typedef std::ratio<1, 2> jednaDruga;

    display<jednaTrzecia>();
    std::cout << " + "; // 1/3
    display<jednaDruga>();
    std::cout << " = "; // 1/2
    typedef std::ratio_add<jednaDruga, jednaTrzecia> sum;
    display<sum>(); // 5/6

    std::cin.get();
    return 0;
}
