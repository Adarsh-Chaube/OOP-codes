#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        Complex(int x=0,int y=0):a(x),b(y){}
        friend istream& operator>>(istream&in,Complex &o)
        {
            cout<<"Enter real part : ";
            in>>o.a;
            cout<<"Enter imaginary part : ";
            in>>o.b;
            return in;
        }
        friend ostream& operator<<(ostream&out,Complex&o)
        {
            cout<<o.a<<" + i"<<o.b<<endl;
            return out;
        }
};
int main()
{
    Complex obj;
    cin>>obj;
    cout<<obj;
    return 0;
}