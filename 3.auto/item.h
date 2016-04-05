#pragma once

struct Item
{
  int weight;
  std::string name;

  Item(int weight, std::string name) : weight(weight), name(name) {}

  virtual void print()
  {
      std::cout << name << " - " << weight;
  }
};

struct Hat : Item
{
    int color;

    Hat(int weight, std::string name, int color) : Item(weight, name), color(color) {}

    void print()
    {
        Item::print();
        std::cout << " - " << color;
    }
};
