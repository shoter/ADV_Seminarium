#include <iostream>

struct Base
{
    virtual void foo();
    virtual void fun();
    void bar();
};

//override jako nazwa klasy!
struct override : public Base
{
    void foo() const override; // błąd! Sygnatura funkcji się nie zgadza!
    void foo() override; // OK
    void bar() override; // błąd! bar nie jest wirtualny
    void fun() final override;
};


int main()
{
}
