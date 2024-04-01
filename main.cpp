#include <iostream>
#include <vector>
#include <iomanip>
#include "ClassUser.h"
#include "constants.h"
using namespace std;
/* 
void Display_Users(vector<User>); */

int main(){
    int count,id,colw{10},deleted_id;
    bool found=false,flag=false;
    vector<User> user;
    string l_Name;
    unsigned int age;
    int option{0};
    while(option!=5)
    {
    cout<<"\nPlease Enter an Option\n1-Add Record\n2-Fetch Record\n3-Display All users"<<endl;
    cout<<"4-Delete User\n5-Quit"<<endl;
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
            if(User::get_count()==0)
            {
                cout<<"No users Added on the system."<<endl<<endl;
                break;
            }
            cout<<"The number of users is:"<<User::get_count()<<endl;
            cout<<"Name"<<setw(15)<<"Age"<<setw(10)<<"ID"<<endl;
            for(int i{};i<user.size();i++)
            {
                cout<<user[i].get_name()<<setw(18-user[i].get_name().size())<<user[i].get_age()<<setw(12)<<user[i].get_ID()<<endl;
            }
            break;
        case 4:
            if(User::get_count()==0)
            {
                cout<<"No users Added on the system."<<endl;
                break;
            }
            cout<<"please enter the user's ID:";
            cin>>deleted_id;
            for (size_t i = 0; i < user.size(); i++)
            {   
                if(user[i].get_ID()==deleted_id)
                {
                    count=deleted_id-1000;
                    user.erase(user.begin()+count);
                    decrement_count(user[0]);
                    cout<<"User with ID:"<<deleted_id<<" is Deleted Successfully"<<endl;
                    flag=true;
                    break;
                }
            }
            
            if(flag==false)
            {
                cout<<"The user of ID:"<<deleted_id<<" is not found"<<endl;
            }
            break;


        case 5:
            cout<<"Thank You for using our application"<<endl;
            return 0;
    }
    }
}


/* void Display_Users(vector<User> user)
{
    if(user[0].get_count()==0)
    {
        cout<<"No users Added on the system."<<endl;
        return;
    }
    cout<<"The number of users is:"<<user[0].get_count()<<endl<<endl;
    int colw{10};
    cout<<"Name"<<setw(15)<<"Age"<<setw(10)<<"ID"<<endl;
    for(int i{};i<user.size();i++)
    {
        cout<<user[i].get_name()<<setw(18-user[i].get_name().size())<<user[i].get_age()<<setw(10)<<user[i].get_ID()<<endl;
    }
} */