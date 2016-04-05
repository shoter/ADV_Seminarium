#include <iostream>
#include <vector>
#include <set>
#include <map>

int main()
{
    std::vector<int> intVector = {1, 3, 5, 7, 9};
    std::set<int> intSet = {1, 3, 2, 1};
    std::map<int,std::string> intKeyBasedMap { {0,"zero"}, {1,"one"}, {2,"two"} };

    std::cout << "Set content : " << std::endl;
    for(int x : intSet)
    {
        std::cout << x << std::endl;
    }

    std::cin.get();
    return 0;
}
