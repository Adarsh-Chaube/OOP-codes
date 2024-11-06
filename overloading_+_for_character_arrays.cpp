#include<iostream>
#include<cstring>
using namespace std;
class A
{
    char str[100];
    public:
        A(const char* s="")
        {
            strcpy(str,s);
        }
        A operator+(A&o)
        {
            A temp;
            strcpy(temp.str,str);
            strcat(temp.str,o.str);
            return temp;
        }
        void display()
        {
            cout<<str<<endl;
        }
};
int main()
{
    A o1("asdf"),o2("ghjk"),o3;
    o3=o1+o2;
    o1.display();
    o2.display();
    o3.display();
    return 0;
}