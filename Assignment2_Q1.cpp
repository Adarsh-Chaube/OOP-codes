#include<iostream>
using namespace std;
class OverLoadDemo
{
    string str;
    public:
        OverLoadDemo(){}
        void merge(string s1,string s2)
        {
            str.clear();
            int i=0,j=0;
            while(s1[i])
            {
                if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
                {
                    str+=s1[i];
                    s1.erase(i,1);
                    i--;
                }
                i++;
            }
            while(s2[j])
            {
                if(s2[j]=='a'||s2[j]=='e'||s2[j]=='i'||s2[j]=='o'||s2[j]=='u'||s2[j]=='A'||s2[j]=='E'||s2[j]=='I'||s2[j]=='O'||s2[j]=='U')
                {
                    str+=s2[j];
                    s2.erase(j,1);
                    j--;
                }
                j++;
            }
            str+=" "+s1+s2;
        }
        int merge(string s)
        {
            int i=0,sum=0;
            while(s[i])
            {
                if((s[i]-'0')>=0 &&(s[i]-'0')<=9)
                {
                    sum+=(s[i]-'0');
                }
                i++;
            }
            return sum;
        }
        void display()
        {
            cout<<"String is : "<<str<<endl;
        }
};
int main()
{
    OverLoadDemo o;
    string s1,s2,s3;
    cout<<"Enter the first string : ";
    getline(cin,s1);
    cout<<"Enter the second string : ";
    getline(cin,s2);
    o.merge(s1,s2);
    o.display();
    cout<<"Enter a string to calculate sum : ";
    getline(cin,s3);
    int n=o.merge(s3);
    cout<<n<<endl;
    return 0;
}