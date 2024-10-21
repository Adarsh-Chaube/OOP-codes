#include<iostream>
using namespace std;
class Transaction;
class Account
{
    string name;
    int no,bal;
    public:
        Account(string n,int noo,int b) : name(n),no(noo),bal(b){}
        void display()
        {
            cout<<"\nThe acount balance is : "<<bal;
        }
        friend class Transaction;
};
class Transaction
{
    public:
        void d(Account&o)
        {
            cout<<"Enter amount to be deposited :";
            int amt;
            cin>>amt;
            o.bal+=amt;
            o.display();
        }
        void w(Account&o)
        {
            cout<<"Enter amount to be withdrawn :";
            int amt;
            cin>>amt;
            o.bal-=amt;
            o.display();
        }
};
int main()
{
    Account obj("asdf",123,1000);
    Transaction o;
    o.d(obj);
    o.w(obj);
    return 0;
}