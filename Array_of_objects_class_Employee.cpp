#include<iostream>
using namespace std;
class Employee
{
    public:
        int eid,eis;
        string name;
        void enter()
        {
            cin.ignore();
            cout<<"Enter the name of the employee  :";
            getline(cin,name);
            cout<<"Enter the id: ";
            cin>>eid;
            cout<<"Enter the salary : ";
            cin>>eis;
        }
        void display()
        {
            cout<<"Name : "<<name<<endl<<"Employee id : "<<eid<<endl<<"Employee Salary : "<<eis<<endl;
        }
};
int main()
{
    int n,c=0;
    Employee o[100];
    cout<<"Enter the no. of records you want to enter : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        o[i].enter();
    }
    int id;
    cout<<"Enter the employee id to be searched : ";
    cin>>id;
    for(int i=0;i<n;i++)
    {
        if(o[i].eid==id)
        {
            o[i].display();
            c=1;
            break;
        }    
    }
    if(!c)
    {
        cout<<"The id is not found.";
    }
    return 0;
}