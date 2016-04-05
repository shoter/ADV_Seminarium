#include <iostream>
#include <vector>

using std::cout;

int main()
{
    int tab[] = { 1, 3 , 5, 7};

    for(int element : tab)
    {
        std::cout << element << " "; // 1 3 5 7
    }

    std::vector<char> myVector = { 'T', 'e', 's', 't'};
    for(char c : myVector)
    {
        std::cout << c;
    }

    std::cin.get();
    return 0;
}
