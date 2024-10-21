#include<stdio.h>
typedef struct student_details{
    int rno;
    char name[100];
}student;
int main()
{
    student s;
    int n,i;
    FILE *f;
    f=fopen("file.txt","wb");
    if(f==NULL)
    {
        printf("the file can't be opened !!!!");
        return 0;
    }
    printf("Enter the no. of entries you want to input : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the details of student %d : \n",i+1);
        printf("Roll no. : ");
        scanf("%d",&s.rno);
        printf("Name : ");
        scanf(" %[^\n]s",s.name);
        fwrite(&s,sizeof(s),1,f);
    }
    fclose(f);
    f=fopen("file.txt","rb");
     if (f == NULL) {
        printf("The file can't be opened for reading!!!!");
        return 0;
     }
    printf("The data in the file is : \n");
    while(fread(&s,sizeof(s),1,f))
    {
        printf("%d\t%s\n",s.rno,s.name);
    }   
    fclose(f);
    return 0;
}