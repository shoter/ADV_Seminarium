#include "zad3.h"
#include "files.h"
#include <iostream>

///Napisz program który za pomocą wyrażeń regularnych wyswietli przeksztalcone
///nazwy plikow podane w tablicy files

///Nalezy przeksztalcic nazwy plikow konczace sie na .xaml, .xml, .html
///na pliki konczace sie na roszerzenie .doc

///funkcja shouldCheck powinna sprawdzic czy dany plik nalezy przeksztalcic
///funkcja transformFile powinna ten plik przeksztalcic


///Jakby ktos nie pamietal wyrazen regularnych to tutaj jest odnosnik do wikipedii
/// https://en.wikipedia.org/wiki/Regular_expression

int main()
{
    for(auto file : files)
    {
        if(shouldCheck(file))
        {
            auto transformed = transformFile(file);
            std::cout << transformed << std::endl;
        }
    }
    return 0;
}
/* OUTPUT :
site.doc
conf.doc
conf.doc
window.doc
*/
