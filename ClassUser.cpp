#include "ClassUser.h"



User::User(string name,unsigned int age)
{
    static int l_id{0};
    Name=name;
    Age=age;
    ID=l_id++;
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