#include<iostream>
using namespace std;
class Student_info;
class address
{
    int hno,pin;
    string street_name,location,city,state,country;
    public:
        address(){}
        address(int)
        {
            cout<<"Enter house no. : ";
            cin>>hno;
            cout<<"Enter street name : ";
            cin.ignore();
            getline(cin,street_name);
            cout<<"Enter location : ";
            getline(cin,location);
            cout<<"Enter city name : ";
            getline(cin,city);
            cout<<"Enter Pincode : ";
            cin>>pin;
            cout<<"Enter state : ";
            cin.ignore();
            getline(cin,state);
            cout<<"Enter country : ";
            getline(cin,country);
        }
        friend class Student_info;
};
class Student_info
{
    string name;
    int id;
    address add;
    public:
        Student_info()
        {
            cout<<"Enter the students' name : ";
            getline(cin,name);
            cout<<"Enter the student id : ";
            cin>>id;
            add=address(1);
        }
    void display()
    {
        cout<<"Student name : "<<name;
        cout<<"\nStudent id : "<<id;
        cout<<"\nAddress : "<<add.hno<<", "<<add.street_name<<", "<<add.location<<", "<<add.city<<", "<<add.pin<<", "<<add.state<<", "<<add.country<<"\n";
    }
};
int main()
{
    Student_info s;
    s.display();
    return 0;
}