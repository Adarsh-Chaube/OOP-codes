#include<iostream>
using namespace std;
class Motel
{
    string name;
    int rno,td,nod;
    static int norb;
    public:
        void checkIn()
        {
            cout<<"Enter the room no. : ";
            cin>>rno;
            cin.ignore();
            cout<<"Enter the name of the customer : ";
            getline(cin,name);
            cout<<"Enter the rent of the room : ";
            cin>>td;
            cout<<"Enter the number of days : ";
            cin>>nod;
            norb++;
        }
        void total_amount()
        {
            int amount=td*nod;
            if(amount>10000)
                amount=1.05*amount;
            cout<<"The total payable amount is : "<<amount<<endl;
        }
        void show_details()
        {
            cout<<"Name : "<<name<<endl<<"Room no. : "<<rno<<endl<<"Rent of the room : "<<td<<endl<<"Number of days : "<<nod<<endl<<"Number of rooms booked : "<<norb<<endl;
        }
        static void number_of_rooms_booked()
        {
            cout<<"No. of rooms booked : "<<norb<<endl;
        }
        void checkOut()
        {
            show_details();
            total_amount();
            norb--;
        }
};
int Motel::norb=0;
int main()
{
    Motel obj,o2;
    obj.checkIn();
    o2.checkIn();
    Motel::number_of_rooms_booked();
    obj.checkOut();
    o2.checkOut();
    return 0;
}