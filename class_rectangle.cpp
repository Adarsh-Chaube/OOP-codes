#include<iostream>
using namespace std;
class Rectangle
{
    int length,breadth;
    public:
        Rectangle(int l,int b):length(l),breadth(b){}
        void perimeter()
        {
            cout<<"The perimeter of the rectangle is : "<<2*(length+breadth)<<endl;
        }
        void area()
        {
            cout<<"The area of the rectangle is : "<<length*breadth<<endl;
        }
};
int main()
{
    Rectangle obj(10,20);
    obj.perimeter();
    obj.area();
    return 0;
}