#include <iostream>

struct Teen
{
    void run() noexcept
    {
        std::cout << "I am walking" << std::endl;
    }
};

struct Old
{
    void run() noexcept(false)
    {
        throw "ouch!";
    }
};

template <class Human>
void safeRun(Human human)
{
    static_assert(noexcept(human.run()), "This human cannot run!");
    human.run();
}

int main()
{
    Teen teen;
    Old old;

    safeRun(teen);
    safeRun(old); //old people cannot run
}
