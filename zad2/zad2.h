#pragma once
#include <type_traits>
class Base
{
public :
    Base() = default;
    Base(const Base &) = delete;
    virtual void fun() const noexcept {}

    virtual void pun() final {}

protected :
    Base& operator =(const Base &) = default;
};

template<typename T>
void test(T arg) noexcept(!std::is_same<T, const char *>::value) {}

//template<>
//void test<const char *>(const char *arg) noexcept(false) {}
