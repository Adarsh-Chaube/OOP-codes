#include<iostream>
using namespace std;
class Bank
{
    int id,acc_no,balance;
    string name,type,address;
    public:
        Bank()
        {
            cout<<"Enter the id : ";
            cin>>id;
            cin.ignore();
            cout<<"Enter name : ";
            getline(cin,name);
            cout<<"Enter acc_no : ";
            cin>>acc_no;
            cin.ignore();
            cout<<"Enter the account type : ";
            getline(cin,type);
            cout<<"Enter the account's balance : ";
            cin>>balance;
            cin.ignore();
            cout<<"Enter the address : ";
            getline(cin,address);
        }
        void deposit()
        {
            int amt;
            cout<<"Enter the amount to be deposited : ";
            cin>>amt;
            balance+=amt;
        }
        void withdraw()
        {
            int amt;
            cout<<"Enter the amount to be withdrawn : ";
            cin>>amt;
            if(amt>balance)
            {
                cout<<"The amount to be withdrawn exceeds the balance\n";
                return;
            }
            balance-=amt;
            cout<<"Amount is successfully withdrawn.\nThe available balance is : "<<balance<<'\n';
        }
        void check_balance()
        {
            cout<<"The balance is : "<<balance<<'\n';
        }
        void update_address()
        {
            string add;
            cin.ignore();
            cout<<"Enter the new address : ";
            getline(cin,add);
            address=add;
            cout<<"The updated address is : "<<address<<'\n';
        }
};
int main()
{
    Bank b;
    b.deposit();
    b.withdraw();
    b.check_balance();
    b.update_address();
    return 0;
}