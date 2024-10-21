#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string : ";
    cin >> str;
    int i,j,v[100],n,l=0,count;
    n=str.length();
    for(i=0;i<n;i++)
    {
        if(v[i]==1)
         continue;
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            {
                v[j]=1;
                count++;
            }
        }
        if(count>1)
            l++;
    }
    cout<<"The no. of duplicate characters are : "<<l;
    return 0;
}