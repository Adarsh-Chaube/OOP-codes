#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
        Complex(int r=0,int i=0):real(r),imag(i){}
        friend Complex operator-(Complex&ob)
        {
            Complex o;
            o.real=-ob.real;
            o.imag=-ob.imag;
            return o;
        }
        friend Complex operator++(Complex&ob)
        {
            Complex o;
            o.real=++ob.real;
            o.imag=++ob.imag;
            return o;
        }
        friend Complex operator++(Complex&ob,int n)
        {
            Complex o;
            o.real=ob.real++;
            o.imag=ob.imag++;
            return o;
        }
        friend Complex operator--(Complex&ob)
        {
            Complex o;
            o.real=--ob.real;
            o.imag=--ob.imag;
            return o;
        }
        friend Complex operator--(Complex&ob,int n)
        {
            Complex o;
            o.real=ob.real--;
            o.imag=ob.imag--;
            return o;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};
int main()
{
    Complex o1(1,2),o3(4,5),o2,o4;
    cout<<"------Pre increment--------\n"<<"Initial o1=";
    o1.display();
    cout<<"initial o2=";
    o2.display();
    o2=++o1;
    cout<<"Final o1=";
    o1.display();
    cout<<"Final o2=";
    o2.display();
    cout<<"------Post increment--------\n"<<"Initial o3=";
    o3.display();
    cout<<"initial o4=";
    o4.display();
    o4=o3++;
    cout<<"Final o3=";
    o3.display();
    cout<<"Final o4=";
    o4.display();
    o2=Complex(0,0);
    o4=Complex(0,0);
    cout<<"------Pre decrement--------\n"<<"Initial o1=";
    o1.display();
    cout<<"initial o2=";
    o2.display();
    o2=--o1;
    cout<<"Final o1=";
    o1.display();
    cout<<"Final o2=";
    o2.display();
    cout<<"------Post decrement--------\n"<<"Initial o3=";
    o3.display();
    cout<<"initial o4=";
    o4.display();
    o4=o3--;
    cout<<"Final o3=";
    o3.display();
    cout<<"Final o4=";
    o4.display();
    cout<<"------Unary '-' ------\n"<<"o1=";
    o1.display();
    cout<<"o2=-o1\n";
    o2=-o1;
    cout<<"o2=";
    o2.display();
    return 0;
}