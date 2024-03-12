#include "ClassUser.h"

int User::ID=0;

User::User(string name,unsigned int age)
{
    Name=name;
    Age=age;
    ID++;
}

User::~User()
{
}


User* User::set_Name(string n)
{
    this->Name=n;
    return this;
}
User* User::set_Age(unsigned int a)
{
    this->Age=a;
    return this;
}

unsigned int User::get_ID()
{
    return ID;
}