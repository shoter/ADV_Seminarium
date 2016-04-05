#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>

int main()
{
    std::pair<int ,int> firstPair = {1,2};
    std::pair<int, int> secondPair = std::make_pair(1,2);

    firstPair.first = 123;

    std::cout << firstPair.first << ", " << firstPair.second << std::endl;

    std::vector<std::pair<std::string, std::string>> people =
    {
        { "Jan", "Kowalski" },
        { "Test", "Testowy" },
        { "Adam", "Kowalski" },
        { "Marcin", "Kowalski"},
        { "Tset", "Testowy" },
        { "Jan", "Nowak" },
        { "Adam" , "Nowak" },
        { "Test", "Nowak" }
    };

    std::sort(people.begin(), people.end());

    for(auto p : people)
    {
        std::cout << p.first << ", " << p.second << std::endl;
    }

    std::cout << "\nTuple:\n" << std::endl;

    std::tuple<int, std::string, std::string> tuple = std::make_tuple(123, "Jan", "Nowak");

    std::get<0>(tuple) = 1;

    std::cout << std::get<0>(tuple) << std::get<2>(tuple); //1Nowak

    std::cin.get();
    return 0;
}
