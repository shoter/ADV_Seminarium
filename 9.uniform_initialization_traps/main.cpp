#include <iostream>
#include <vector>
#include <typeinfo>


int main()
{
    int variable = 5.2;
    int secondVariable = {5.2};

    std::vector<int> firstVector{1,2,3,4,5};

    for(auto element : firstVector)
    {
        std::cout << element << std::endl;
    }

    std::cout << "--------" << std::endl;

    std::vector<int> secondVector{10};

    for(auto element : secondVector)
    {
        std::cout << element << std::endl;
    }

    std::cout << "--------" << std::endl;

    std::vector<int> thirdVector(10);

    for(auto element : thirdVector)
    {
        std::cout << element << std::endl;
    }

    std::cout << "Uniform initialization connected with auto : " << std::endl;

    int n;
    auto y{n};
    std::cout << typeid(y).name() << '\n';

    std::cin.get();
    return 0;
}
