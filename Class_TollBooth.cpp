#include<iostream>
using namespace std;
class TollBooth
{
    unsigned int cars;
    double cash;
    public:
        TollBooth()
        {
            cars=0;
            cash=0;
        }
        void payingCars()
        {
            cars++;
            cash+=0.5;
        }
        void nonPayCars()
        {
            cars++;
        }
        void display()
        {
            cout<<"Total no. of cars that passed are : "<<cars;
            cout<<"\nTotal cash collected is : "<<cash;
        }
};
int main()
{
    TollBooth obj;
    char c;
    do
    {
        cout<<"'a'-Paying Car\n'b'-Non Paying Car\nESC-Display and exit\n";
        cout<<"Enter your choice : ";
        cin>>c;
        switch (c)
        {
            case 'a':
                obj.payingCars();
                break;
            case 'b':
                obj.nonPayCars();
                break;
            case 27:
                obj.display();
            default:
                cout<<"Invalid Choice.";
        }
    }
    while(c!=27);
    return 0;
}