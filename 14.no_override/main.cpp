#include <iostream>

struct Base
{
    virtual void fun() const
    {
        std::cout << "Base::fun" << std::endl;
    }
};

struct override : public Base
{
    void fun() override
    {
        std::cout << "override::fun" << std::endl;
    }
};


int main()
{
    Base *wsk = new override();

    wsk->fun();

    std::cin.get();
    delete wsk;
    return 0;
}
