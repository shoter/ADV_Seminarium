#pragma once
#include <string>
#include <iostream>
struct Person
{
    std::string name;
    std::string surname;
};

void displayPerson(const Person &person)
    {
        std::cout << person.name << " " << person.surname << std::endl;
    }
