#pragma once
#include <regex>

using namespace std::regex_constants;

bool shouldCheck(std::string file)
{
    std::regex searchExpr("^.+\\.(xa|x|ht)ml$", icase);
    return std::regex_match(file, searchExpr);
}

std::string transformFile(std::string file)
{
    std::regex replaceExpr( "\\.(xa|x|ht)ml$", icase);
    std::string str;
    str = std::regex_replace(file, replaceExpr, ".doc");
    return str;
}
