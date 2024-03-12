#include <iostream>
#include "ClassUser.h"
#include "constants.h"
using namespace std;


int main(){
    User userArr[initialCap];
    std::string l_Name;
    unsigned int age;
    int option{0};
    while(option!=3)
    {
    cout<<"Please Enter an Option\n1-Add Record\n2-Fetch Record\n3-Quit\n"<<endl;
    cout<<"\nEnter Option:";
    cin>>option;
    switch(option)
    {
        case 1:
            cout<<"Please Enter User Name:";
            cin>>l_Name;
            cout<<"Please Enter User Age:";
            cin>>age;
            userArr[0]=User(l_Name,age);
            break;
        case 2:
            /*FetchRecord()*/
            break;
        case 3:
            option=3;
            return 0;
    }
    }
}