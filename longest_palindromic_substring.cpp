#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int n=str.length();
    int l,li,r,ri;
    l=li=0;
    r=ri=n-1;
    while(l<r)
    {
        if(str[l]!=str[r])
        {
            li=l+1;
            ri=r-1;
        }
        l++;
        r--;
    }
    cout<<"The longest palindromic substring is : "<<str.substr(li,ri-li+1);
    return 0;
}