#include <fmt/format.h>
#include "../header/person.h"

Person::Person(std::string name, int age) : name(name), age(age)
{
}

Person::~Person()
{
}

void Person::whoAmI()
{
    fmt::println("my name is {} and i'm {} years old", this->name, this->age);
}