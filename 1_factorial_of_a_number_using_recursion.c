#include<stdio.h>
int factorial(int );
int main()
{
    int n,fact;
    printf("Enter the number : ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("The factorial of %d is : %d",n,fact);
    return 0;
}
int factorial(int n)
{
    int fact=1;
    if(n!=0)
    {
        return n*factorial(n-1);
    }
    return fact;
}