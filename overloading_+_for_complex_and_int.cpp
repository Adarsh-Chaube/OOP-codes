#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        Complex(int x=0,int y=0):a(x),b(y){}
        friend Complex operator+(int n,Complex&o)
        {
            Complex temp;
            temp.a=n+o.a;
            temp.b=o.b;
            return temp;
        }
        void display()
        {
            cout<<a<<" + i"<<b<<endl;
        }
};
int main()
{
    Complex o1(10),o2;
    o2=10+o1;
    o1.display();
    o2.display();
    return 0;
}