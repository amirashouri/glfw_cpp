#include <stdlib.h>

class Person
{
public:
    void whoAmI();

    Person(std::string name, int age);
    virtual ~Person();

private:
    int age;
    std::string name;
};
