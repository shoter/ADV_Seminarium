#include "zad2.h"
#include "defines.h"
#include <iostream>
//przy ustawionej jedynce program nie może się skompilować. W przeciwnym wypadku musi
//sie kompilowac
//Twój program może inaczej wyglądać w zależności od tego czy flaga jest ustawiona na 0
//lub 1

//Zadaniem jest taka konstrukcja klasy Base aby program sie kompilowal gdy Flaga bledow
//jest wylaczona
//i ma sie nie kompilowac rzucajac w kazdym miejscu z ifdefem blad gdy flaga rowna jest 1

//W zadaniu nalezy użyć słow kluczowych default, delete, final, noexcept.

class Bar : public Base
{
public :
    Bar() = default;
    Bar(const Bar&) = delete;

    void fun() const noexcept override
    {
        std::cout << "Bar::fun()" << std::endl;
        Bar testBar;
        Bar secondBar;

        Bar bar;
        bar = secondBar; //dobrze
#if COMPILE_ERRORS
        Bar copied(testBar); //zle
#endif
    }
#if COMPILE_ERRORS
    void pun() override final
    {
        std::cout << "Bar::pun()" << std::endl;
    }
#endif
};


int main()
{
    Base testBase;
    Base secondBase;
    testBase.pun();
    testBase.fun();
    Bar testBar;
    testBar.pun();
    testBar.fun();
    static_assert( noexcept(test(123)), "wrong" );
    static_assert( noexcept(test(123.3)), "wrong" );
    static_assert( noexcept(test(true)), "wrong" );
    static_assert( !noexcept(test("123")), "wrong" );
#if COMPILE_ERRORS
    testBase = secondBase; //zle
    Base copied(testBase); //zle
#endif
}
