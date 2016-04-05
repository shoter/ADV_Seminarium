#include <iostream>
#include <vector>
void fun(char *)
{
    std::cout << "Funkcja z charem!" << std::endl;
}

void fun(int)
{
    std::cout << "Funkcja z intem" << std::endl;
}

int main()
{
    fun(NULL);
    fun(nullptr);

    char *wsk = NULL;
    fun(NULL);

    char *secondWsk = nullptr;
    fun(secondWsk);

    int *intWsk = new int;

    delete intWsk;
    intWsk = nullptr;

    std::cin.get();
    return 0;
}
