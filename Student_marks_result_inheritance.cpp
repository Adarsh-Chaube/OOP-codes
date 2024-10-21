#include<iostream>
using namespace std;
class Student
{
    int roll;
    string name;
    public:
        void getinfo()
        {
            cout<<"Enter the name of the student : ";
            getline(cin,name);
            cout<<"Enter the roll no. : ";
            cin>>roll;
        }
        void showinfo()
        {
            cout<<"Name is : "<<name<<endl;
            cout<<"Roll No. is :"<<roll<<endl;
        }
};
class Marks : private Student
{
    protected:
        int m1,m2,m3,m4,m5;
    public:
        void getmarks()
        {
            cout<<"Enter the marks of five subjects : ";
            cin>>m1>>m2>>m3>>m4>>m5;
        }
        void si()
        {
            showinfo();
        }
        void gi()
        {
            getinfo();
        }
};
class Result : protected Marks
{
    int sports,total;
    public:
        void gettotal()
        {
            cout<<"Enter the sports marks : ";
            cin>>sports;
            total=m1+m2+m3+m4+m5+sports;
        }
        void showall()
        {
            gi();
            getmarks();
            gettotal();
            si();
            cout<<"marks are : "<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<"\t"<<m5<<"\t"<<sports<<endl;
            cout<<"total marks are : "<<total;
        }
        /*void gii()
        {
            gi();
        }
        void sii()
        {
            si();
        }*/
};
int main()
{
    Result obj;
    obj.showall();
    return 0;
}