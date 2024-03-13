#include <iostream>
#include <vector>
#include <iomanip>
#include "ClassUser.h"
#include "constants.h"
using namespace std;

void Display_Users(vector<User>);

int main(){
    int count{0},id;
    bool found=false;
    vector<User> user;
    string l_Name;
    unsigned int age;
    int option{0};
    while(option!=3)
    {
    cout<<"\nPlease Enter an Option\n1-Add Record\n2-Fetch Record\n3-Display All users"<<endl;
    cout<<"4-Quit"<<endl;
    cout<<"\nEnter Option:";
    cin>>option;
    switch(option)
    {
        case 1:
            cout<<"Please Enter User Name:";
            getline(cin>>ws,l_Name);
            cout<<"Please Enter User Age:";
            cin>>age;
            user.push_back(User(l_Name,age));
            break;
        case 2:
            cout<<"Please Enter User ID:";
            cin>>id;
            for(int i{};i<user.size();i++)
            {
                if(user[i].get_ID()==id)
                {
                    user[i].Print_Data();
                    found=true;
                }
            }
            if(!found)
            {
                cout<<"User with ID "<<id<<" Was not found."<<endl<<endl;
            }
            found=false;
            break;
        case 3:
            Display_Users(user);

        case 4:
            return 0;
    }
    }
}


void Display_Users(vector<User> user)
{
    int colw{10};
    cout<<"ID\tName\t\tAge"<<endl;
    for(int i{};i<user.size();i++)
    {
        cout<<user[i].get_ID()<<"\t"<<user[i].get_name()<<"\t"<<user[i].get_age()<<endl;
    }
}