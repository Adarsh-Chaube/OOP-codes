#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,sum=0;
    cout<<"Enter the no. of elements in the array : ";
    cin>>n;
    cout<<"Enter the elements of the array (only 0 or 1) : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<(n-sum);i++)
        arr[i]=0;
    for(int i=n-sum;i<n;i++)
        arr[i]=1;
    cout<<"The sorted array is : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    return 0;
}