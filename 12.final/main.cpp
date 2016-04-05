#include <iostream>

class Base
{
  virtual void virtualFunction() final {}
};

class Derived final : public Base
{
    //virtual void virtualFunction()  { } //error
    //void foo() final {} //error
};

/*class ShallWe : public Derived //error
{

};*/


int main()
{
    int final = 12; //Możemy mieć taką zmienną! :)
}
