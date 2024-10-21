#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp;
    int l,i,j;
    char *p;
    p=str;
    printf("Enter the string : ");
    fgets(str,100,stdin);
    l=strlen(str)-1;
    i=0;
    j=l-1;
    while(i<j)
    {
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
        i++;
        j--;
    }
    printf("The reversed string is : %s",p);
    return 0;
}