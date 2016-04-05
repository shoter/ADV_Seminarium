#include "zad1.h"
///Napisać klase Join która przyjmuje liste inicjalizacyjną i potrafi stworzyć wektor będący połączeniem wektorów
///które zostały podane jako parametry podczas inicjalizacji


using std::cout;
using std::endl;

int main()
{
    std::vector<int> vectors[] = { {1, 2}, {3} , {4, 5, 6} };
    std::vector<int> joined = Join<int>{ vectors[0], vectors[1], vectors[2] };

    for(auto element : joined)
        cout << element << " ";
    cout << endl;

    std::vector<int> secondJoin = Join<int>{ joined, joined };
    for(auto element :  secondJoin)
        cout << element << " ";

    std::cin.get();
}
//OUTPUT :
//1 2 3 4 5 6
//1 2 3 4 5 6 1 2 3 4 5 6
