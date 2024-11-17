#include<iostream>
using namespace std;
class A
{
    public:
        int func(int n)
        {
            cout<<"A's func called 1 time\n";
            return (n*2);
        }
};
class B
{
    public:
        int func(int n)
        {
            cout<<"B's func called 1 time\n";
            return (n*3);
        }
};
class C
{
    public:
        int func(int n)
        {
            cout<<"C's func called 1 time\n";
            return (n*5);
        }
};
class D:public A,public B,public C
{
    int val=1,new_val;
    public:
        D(int a):new_val(a){}//new_val must have only 2,3,5 as its prime factors
        void update_val()
        {
            cout<<"new_val="<<new_val<<endl;
            cout<<"Initial val : "<<val<<endl;
            int n=new_val;
            while(n!=1)
            {
                if(n%2==0)
                {
                    val=A::func(val);
                    n/=2;
                }
                if(n%3==0)
                {
                    val=B::func(val);
                    n/=3;
                }
                if(n%5==0)
                {
                    val=C::func(val);
                    n/=5;
                }
            }
            cout<<"Updated val : "<<val<<endl;
        }
};
int main()
{
    cout<<"Enter new_val : ";
    int nv;
    cin>>nv;
    D obj(nv);
    obj.update_val();
    return 0;
}