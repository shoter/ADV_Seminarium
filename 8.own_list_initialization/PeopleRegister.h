#pragma once
#include <string>
#include <algorithm>
#include <initializer_list>
#include "Person.h"

class PeopleRegister
{
public :
    PeopleRegister(std::initializer_list<Person> peopleList)
    {
        Count = peopleList.size();
        people = new Person[Count];
        std::copy(peopleList.begin(), peopleList.end(), people);
    }
    void Display() const
    {
        std::for_each(people, people + Count, displayPerson);
    }
    ~PeopleRegister()
    {
        delete[] people;
    }
private :
    Person* people;
    size_t Count;
};
