#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    int a,b,c,d,e,max1,max2;
    cout<<"Enter 5 integers : ";
    cin>>a>>b>>c>>d>>e;
    if(a>b)
    {
        max1=a;
        max2=b;
    }
    else
    {
        max1=b;
        max2=a;
    }
    if(c>max1)
    {
        max2=max1;
        max1=c;
    }
    else if(max2<c)
        max2=c;
    if(max1<d)
    {
        max2=max1;
        max1=d;
    }
    else if(d>max2)
        max2=d;
    if(e>max1)
    {
        max2=max1;
        max1=e;
    }
    else if(max2<e)
        max2=e;
    cout<<"The largest element is : "<<max1<<endl;
    cout<<"The second largest element is : "<<max2<<endl;
}