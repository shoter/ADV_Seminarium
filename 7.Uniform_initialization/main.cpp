#include <iostream>

struct Aggregate
{
    int var1;
    int var2;
};

class NotAggregate
{
private :
    int var1;
    int var2;
public :
    void Display()
    {
        std::cout << var1 << " - " << var2 << std::endl;
    }

    NotAggregate(int var1, int var2) : var1(var1), var2(var2)
    {

    }
};

NotAggregate createDefaultNotAggregate()
{
    return {20, 50}; //zamiast NotAggregate(20, 50)
}

int main()
{
    NotAggregate variable = {10, 40}; // błąd przed C++11
    NotAggregate secondVariable{20, 25}; // błąd przed C++11

    Aggregate thirdVariable{5, 10};

    NotAggregate fourthVariable = createDefaultNotAggregate();

    variable.Display();
    secondVariable.Display();


    std::cin.get();
    return 0;
}
