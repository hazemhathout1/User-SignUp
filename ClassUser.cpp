#include "ClassUser.h"



User::User(string name,unsigned int age)
{
    Name=name;
    Age=age;
}

User::~User()
{
}


void User::set_Name(string n)
{
    Name=n;
}
void User::set_Age(unsigned int a)
{
    Age=a;
}

/* unsigned int User::get_ID()
{
    return ID;
} */