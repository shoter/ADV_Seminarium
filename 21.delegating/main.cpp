#include <iostream>

class Complex
{
public :
    Complex(double re, double im) :re(re), im(im) {}
    Complex(const Complex& other) : Complex(other.re, other.im) {}

    void print(){std::cout << re << " + " << im << "i" << std::endl;}
private :
    double im;
    double re;
};

int main()
{
    Complex first(10,20);
    Complex second(first);

    first.print();
    second.print();

    std::cin.get();
    return 0;
}
