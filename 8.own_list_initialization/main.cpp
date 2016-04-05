#include <iostream>
#include "Person.h"
#include "PeopleRegister.h"

int main()
{
    PeopleRegister reg { {"Damian", "L."}, {"Jan", "Nowak"}, {"Piotr", "Kowalski"}};
    reg.Display();
    std::cin.get();
    int asd(double());
    return 0;
}
