#include <iostream>
#include <string>
#include "constants.h"
using namespace std;
class User
{
private:
    static int count;
    int ID;
    string Name;
    unsigned int Age{};

public:
    //constructors and destructors
    User()=default;
    User(string name,unsigned int age);
    ~User();

    //setters and getters
    User* set_Name(string n);
    User* set_Age(unsigned int a);
    string get_name()
    {
        return Name;
    }
    unsigned int get_age()
    {
        return Age;
    }
    unsigned int get_ID();
    friend void decrement_count(User u);
    int get_count()const;

    //member Functions
    void Print_Data()
    {
        cout<<"User Name: "<<get_name()<<endl;
        cout<<"User Age: "<<get_age()<<endl;
        cout<<"User ID: "<<get_ID()<<endl;
        cout<<endl;
    }
    

};


