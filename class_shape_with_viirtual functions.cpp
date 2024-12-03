#include<iostream>
using namespace std;
class Shape
{
    int length,height;
    public:
        Shape(){}
        Shape(int l,int h):length(l),height(h){}
        virtual double area()
        {
            return (length*height);
        }
};
class Triangle:public Shape
{
    public:
        Triangle(int l,int h):Shape(l,h){}
        double area()
        {
            return(0.5*Shape::area());
        }
};
class Rectangle:public Shape
{
    public:
        Rectangle(int l,int h):Shape(l,h){}
        double area()
        {
            return(Shape::area());
        }
};
int main()
{
    Rectangle r(5,10);
    Triangle t(4,8);
    double ar,at;
    ar=r.area();
    at=t.area();
    cout<<"Area of triangle is : "<<at<<endl;
    cout<<"Area of rectangle is : "<<ar<<endl;
    return 0;
}
