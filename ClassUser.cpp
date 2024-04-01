#include "ClassUser.h"



User::User(string name,unsigned int age):Name(name),Age(age)
{
    static int id{1000};
    count++;
    ID=id++;
}

User::~User()
{
    //count--;
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


void decrement_count(User u)
{
    u.count--;
}