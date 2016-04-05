#include <iostream>
#include <dirent.h>
#include <vector>
#include <regex>
#include <string>
#include <algorithm>

std::vector<std::string> getDirectories(const char * location)
{
    DIR *dir;
    std::vector<std::string> vec;
    struct dirent *ent;
    if ((dir = opendir (location)) != NULL) {
    /* print all the files and directories within directory */
      while ((ent = readdir (dir)) != NULL) {
        vec.push_back(ent->d_name);
      }
  closedir (dir);
    }

    return vec;
}

using namespace std::regex_constants;

int main()
{

    auto directories = getDirectories("c:\\");
    std::regex dirExpr( "^[aeiouy].*", icase );

    for(auto directory : directories)
    {
        if(std::regex_match(directory, dirExpr))
           {
                std::cout << directory << std::endl;
           }
    }

    std::cout << "\nUsuniemy teraz wszystkie samogloski" << std::endl;
    std::cin.get();

    std::regex replaceExpr( "[aeiouy]", icase);

    for(auto directory : directories)
    {
        std::string str;
        str = std::regex_replace(directory, replaceExpr, ".", format_no_copy);
        std::cout << str << std::endl;
    }

    std::cout << "\n\nCzas na regex_search" << std::endl;
    std::cin.get();

    std::regex searchExpr("^(.+)\\.(.+)$", icase);
    std::smatch matchResults;
    for(auto directory : directories)
    {
        std::regex_search(directory, matchResults, searchExpr);

        if(std::regex_match(directory, searchExpr))
           {
                std::cout << "Plik " << matchResults[1] << " ma rozszerzenie " << matchResults[2] << std::endl;
           }
    }

    std::cin.get();
    return 0;
}
