#include<iostream>
using namespace std;
class Academic
{
    int roll,m1,m2,m3;
    string name;
    public:
        void getinfo()
        {
            cout<<"Enter the name : ";
            getline(cin,name);
            cout<<"Enter the roll no. : ";
            cin>>roll;
            cout<<"Enter marks in 3 subjects : ";
            cin>>m1>>m2>>m3;
        }
        void showinfo()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Roll No. : "<<roll<<endl;
            cout<<"Marks : "<<m1<<'\t'<<m2<<'\t'<<m3<<endl;
        }
        int marks()
        {
            return (m1+m2+m3);
        }
};
class Extra
{
    protected:
        int spm,gpm;
    public:
        void getmarks()
        {
            cout<<"Enter the sports marks : ";
            cin>>spm;
            cout<<"Enter the gp marks : ";
            cin>>gpm;
        }
};
class Result : private Academic , protected Extra
{
    int total;
    public:
        void gettotal()
        {
            getinfo();
            getmarks();
            total= marks()+spm+gpm;
        }
        void show()
        {
            showinfo();
            cout<<"Sports and gp marks : "<<spm<<'\t'<<gpm<<endl;
            cout<<"Total marks : "<<total;
        }
};
int main()
{
    Result obj;
    obj.gettotal();
    obj.show();
    return 0;
}