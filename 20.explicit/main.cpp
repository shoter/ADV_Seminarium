#include <iostream>
#include <cmath>

class Complex
{
public :
    Complex(double re, double im) :re(re), im(im) {}

    explicit operator double() const
    {
        return sqrt(pow(re,2) + pow(im,2));
    }
private :
    double re;
    double im;
};

int main()
{
    Complex myComplex(123.,321.);

    std::cout << "Modul liczby zespolonej : " << myComplex << std::endl; // blad
    std::cout << "Modul liczby zespolonej : " << static_cast<double>(myComplex) << std::endl;

    std::cin.get();
    return 0;
}
