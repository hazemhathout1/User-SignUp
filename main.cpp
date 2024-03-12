#include <iostream>
#include <vector>
#include "ClassUser.h"
#include "constants.h"
using namespace std;


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
            for(int i{};i<user.size();i++)
            {
                user[i].Print_Data();
            }

        case 4:
            return 0;
    }
    }
}