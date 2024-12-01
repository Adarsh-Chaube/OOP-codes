#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
        Complex(){}
        Complex(int r,int i):real(r),imag(i){}
        friend Complex operator+(Complex&c,Complex&o)
        {
            Complex temp;
            temp.real=c.real+o.real;
            temp.imag=c.imag+o.imag;
            return temp;
        }
        friend Complex operator-(Complex&c,Complex&o)
        {
            Complex temp;
            temp.real=c.real-o.real;
            temp.imag=c.imag-o.imag;
            return temp;
        }
        friend Complex operator-(Complex&c)
        {
            Complex temp;
            temp.real=-c.real;
            temp.imag=-c.imag;
            return temp;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i\n";
        }
};
int main()
{
    Complex o1(2,3),o2(1,2),o3;
    cout<<"o1=";
    o1.display();
    cout<<"o2=";
    o2.display();
    cout<<"Binary + : \no3=o1+o2\no3=";
    o3=o1+o2;
    o3.display();
    cout<<"Binary - : \no3=o1-o2\no3=";
    o3=o1-o2;
    o3.display();
    cout<<"Unary - : \no3=-o1\no3=";
    o3=-o1;
    o3.display();
    return 0;
}