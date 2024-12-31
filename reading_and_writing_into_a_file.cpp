#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("file.txt");
    out << "hello world";
    out.close();
    ifstream in;
    in.open("file.txt");
    char ch;
    ch=in.get();
    while(!in.eof())
    {
        cout<<ch<<" ";
        ch=in.get();
    }
    in.close();
    return 0;
}