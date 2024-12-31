#include<iostream>
using namespace std;
class E
{
    int n,d;
    public:
        E()
        {
            cout<<"Enter numerator : ";
            cin>>n;
                cout<<"Enter denominator : ";
                cin>>d;
                if(d==0)
                    throw(d);
                cout<<"thos"<<endl;
            
            
        }
        void res()
        {
            cout<<"result is : "<<n/d<<endl;
        }
};
int main()
{
    try 
    {
        E obj;
    }
    catch(...)
            {
                cout<<"Division by 0 is not allowed!!!"<<endl;
            }
    
    return 0;
}