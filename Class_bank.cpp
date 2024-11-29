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
            cout<<"Amount is successfully deposited.\nThe available balance is : "<<balance<<'\n';
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
    int c;
    do
    {
        cout<<"Enter : 1-For making a deposit\n2-For making a withdrawal\n3-For checking balance\n4-For updating address\n5-For exiting the interface\nEnter your choice : ";
        cin>>c;
        switch (c)
        {
            case 1:
                b.deposit();
                break;
            case 2:
                b.withdraw();
                break;
            case 3:
                b.check_balance();
                break;
            case 4:
                b.update_address();
                break;
            case 5:
                break;
            default:
                cout<<"invalid choice";
        }
    }while(c!=5);
    return 0;
}
