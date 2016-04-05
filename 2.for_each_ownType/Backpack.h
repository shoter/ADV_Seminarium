#pragma once
#include <string>
#include <vector>

struct Item
{
    int weight;
    std::string name;

    Item(int weight, std::string name) : weight(weight), name(name) {}
};

class Backpack{

    std::vector<Item> items;
public:
    void add(const Item item)
    {
        items.push_back(item);
    }

    typedef typename std::vector<Item>::const_iterator const_iterator;

    const_iterator begin() const {return items.begin();}
    const_iterator end() const {return items.end();}
};
