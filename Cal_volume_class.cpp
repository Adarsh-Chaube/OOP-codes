#include<iostream>
using namespace std;
class Cal_Volume
{
    protected:
        float pi=3.14;
        int r;
    public:
        void getdata()
        {
            cout<<"Enter radius : ";
            cin>>r;
        }
        virtual void display_volume()=0;
};
class Cone: protected Cal_Volume
{
    int h;
    float vol;
    public:
        void getdata()
        {
            Cal_Volume::getdata();
            cout<<"Enter height of cone : ";
            cin>>h;
        }
        void display_volume()
        {
            vol=pi*r*r*h/3;
            cout<<"Volume of cone is : "<<vol<<endl;
        }
};
class Cylinder: protected Cal_Volume
{
    int h;
    float vol;
    public:
        void getdata()
        {
            Cal_Volume::getdata();
            cout<<"Enter height of cylinder : ";
            cin>>h;
        }
        void display_volume()
        {
            vol=pi*r*r*h;
            cout<<"Volume of cylinder is : "<<vol<<endl;
        }
};
class Hemisphere: protected Cal_Volume
{
    float vol;
    public:
        void getdata()
        {
            Cal_Volume::getdata();
        }
        void display_volume()
        {
            vol=pi*r*r*r*2/3;
            cout<<"Volume of hemisphere is : "<<vol<<endl;
        }
};
int main()
{
    Cone c;
    c.getdata();
    c.display_volume();
    Cylinder cy;
    cy.getdata();
    cy.display_volume();
    Hemisphere h;
    h.getdata();
    h.display_volume();
}