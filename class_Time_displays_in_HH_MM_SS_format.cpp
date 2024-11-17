#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
    int min,sec,hour;
    public:
    void getdata()
    {
        cout<<"Enter seconds : ";
        cin>>sec;
        cout<<"Enter minutes : ";
        cin>>min;
        cout<<"Enter hour : ";
        cin>>hour;
        if(sec>59)
        {
            min+=sec/60;
            sec=sec%60;
        }
        if(min>59)
        {
            hour+=min/60;
            min=min%60;
        }
        if(hour>23)
            hour=hour%24;
    }
    Time operator+(Time&o1)
    {
        Time temp;
        temp.sec=o1.sec+sec;
        temp.min=o1.min+min;
        temp.hour=o1.hour+hour;
        if(temp.sec>60)
        {
            temp.min+=temp.sec/60;
            temp.sec=temp.sec%60;
        }
        if(temp.min>59)
        {
            temp.hour+=temp.min/60;
            temp.min=temp.min%60;
        }
        if(temp.hour>23)
            temp.hour=temp.hour%24;
        return temp;
    }
    void display()
    {
        cout<<setfill('0') << setw(2) << hour<<":"<<setfill('0') << setw(2) << min<<":"<<setfill('0') << setw(2) << sec<<endl;
    }
};
int main()
{
    Time o1,o2,o3;
    o1.getdata();
    o2.getdata();
    o3=o1+o2;
    o1.display();
    o2.display();
    o3.display();
    return 0;
}