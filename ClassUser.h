#include <string>
#include "constants.h"
using namespace std;
class User
{
private:
    static int ID;
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
    unsigned int get_ID();
    

};


