#include<iostream>
using namespace std;
class Car_rental
{
    int id,rent;
    static int no_of_cars;
    string type;
    public:
        Car_rental()
        {
            cout<<"Enter car id : ";
            cin>>id;
            cin.ignore();
            cout<<"Enter the car type (small,van,bus) : ";
            cin>>type;
            no_of_cars++;
        }
        void set_rent()
        {
            if(type=="small")
                rent=500;
            else if(type=="van")
                rent=1000;
            else if(type=="bus")
                rent=2000;
            else
                cout<<"Car type is invalid!!!!";
        }
        void show_details()
        {
            cout<<"The car id is : "<<id<<endl<<"The car type is : "<<type<<endl<<"The car rent is : "<<rent<<endl;
        }
        static show_no_of_cars()
        {
            cout<<"Total no. of cars are : "<<no_of_cars<<endl;
        }
};
int Car_rental::no_of_cars=0;
int main()
{
    Car_rental obj;
    int c;
    do
    {
        cout<<"Enter 1-For setting rent\n2-Showing details\n3-Showing no. of cars\n4-Exit the interface\nEnter your choice : ";
        cin>>c;
        switch(c)
        {
            case 1:
                obj.set_rent();
                break;
            case 2:
                obj.show_details();
                break;
            case 3:
                obj.show_no_of_cars();
                break;
            case 4:
                break;
            default:
                cout<<"Invalid choice!!!\n";
        }
    }while(c!=4);
    return 0;
}