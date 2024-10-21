#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(!((str[i]>64 && str[i]<91)||(str[i]>96 && str[i]<123)))
        {
            for(int j=i;j<n-1;j++)
            {
                str[j]=str[j+1];
            }
            str[n-1]='\0';
            n--;
            i--;
        }
    }
    cout<<"The formatted string is : "<<str;
    return 0;
}