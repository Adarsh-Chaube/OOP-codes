#include<iostream>
using namespace std;
class Publication
{
    protected:
    string title;
    public:
        Publication(string s):title(s){}
        void showInfo()
        {
            cout<<"Title of Publication is : "<<title<<endl;
        }
};
class Book:protected Publication
{
    int accno;
    public:
        Book(string s,int n):Publication(s),accno(n){}
        void showInfo()
        {
            Publication::showInfo();
            cout<<"Accession number : "<<accno<<endl;
        }
};
class Magazine:protected Publication
{
    int volno;
    public:
        Magazine(string s,int n):Publication(s),volno(n){}
        void showInfo()
        {
            Publication::showInfo();
            cout<<"Volume number : "<<volno<<endl;
        }
};
class Journal:protected Book,protected Magazine
{
    public:
    Journal(string s,int n,int m):Book(s,n),Magazine(s,m){}
    void showInfo()
    {
        Book::showInfo();
        Magazine::showInfo();
    }
};
int main()
{
    Journal obj("xyz",600,50);
    obj.showInfo();
    return 0;
}
