#include <iostream>

struct Bar
{
    Bar() = default;
    static void fun()
    {
        Bar test;
        Bar test2(test); // działa!
    }
private :
    Bar(const Bar&) = default;

};


int main()
{
    Bar::fun();
    Bar test;
    Bar test2(test); //nie działa
}
