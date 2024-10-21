#include<iostream>
using namespace std;
class Employee
{
    string name;
    int id;
    public:
        Employee(string n,int i)
        {
            name=n;
            id=i;
        }
        void display()
        {
            cout<<"\nThe Employee's name is : "<<name;
            cout<<"\nThe employee id is : "<<id;
        }
};
int main()
{
    cout<<"Enter the no. of employees : ";
    int n,id;
    string name;
    cin>>n;
    Employee *obj=(Employee*)malloc(sizeof(Employee)*n);
    //can also be done using 'new' keyword
    //Employee *obj=new Employee[n]
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        cout<<"Enter the name : ";
        getline(cin,name);
        cout<<"Enter the employee id : ";
        cin>>id;
        obj[i]=Employee(name,id);
    }
    for(int i=0;i<n;i++)
    {
        obj[i].display();
    }
    free(obj);
    return 0;
}