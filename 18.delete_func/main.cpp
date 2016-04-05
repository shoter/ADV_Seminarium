#include <iostream>

struct something
{
    void* operator new(std::size_t) = delete;
};
//something *wsk = new something; //ERROR!
struct myType
{
    myType(const myType&) = delete;
    myType() {}
};
struct Bar
{
    void fun();
};
//Bar::fun() = delete; //Tak nie można

int main()
{
    myType t1;
   //myType t2(t1); Error

    std::cin.get();
    return 0;
}
