#include <iostream>
#include <stdexcept>

void f() noexcept {} //noexcept == noexcept(true)
void g() noexcept(false) {}

template <typename T>
auto myMultiply(T t1, T t2) noexcept(noexcept(t1 * t2)) -> decltype(t1 * t2)
{
    if(noexcept(myMultiply(t1, t2)))
    {
        return t1 * t2;
    }
    else
    {
        std::cout << "Checking if safe : " << std::endl;
        try
        {
            return t1 * t2;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
            throw e;
        }
    }
}

struct PlusNumber
{
    unsigned int number = 1;

    PlusNumber(unsigned int n) : number(n) {}

    PlusNumber operator = (const unsigned int &other) { number = other; }
    operator unsigned int() { return number; }

    PlusNumber operator *(const PlusNumber& other) throw(std::exception)
    {
        if( number == 0 || other.number == 0)
            throw std::runtime_error("Number cannot be 0!");
        return
        {
            number * other.number
        };
    }
};

void emptyFun()
{

}

int main()
{
    PlusNumber test{0};
    std::cout << noexcept(myMultiply(1, 1)) << std::endl;
    std::cout << noexcept(myMultiply(test, test)) << std::endl;
    std::cout << noexcept(emptyFun()) << std::endl;

    std::cout << "-------" << std::endl;

    std::cout << myMultiply(0, 0) << std::endl;
    try
    {
        std::cout << myMultiply(test, test) << std::endl;
    }
    catch(...) {}

    std::cin.get();
    return 0;
}
