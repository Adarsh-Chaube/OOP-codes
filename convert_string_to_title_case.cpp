#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int i=1;
    str[0]=toupper(str[0]);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
            str[++i]=toupper(str[i]);
        else
            str[i]=tolower(str[i]); 
        i++;  
    }
    cout<<"The string in title case is : "<<str<<endl;
    return 0;
}