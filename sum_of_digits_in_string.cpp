#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int sum=0,i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
            sum+=str[i]-48;
        i++;
    }
    cout<<"The sum of the digits in the string is : "<<sum<<endl;
    return 0;
}