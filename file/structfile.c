#include<stdio.h>
#define size 2
struct student{
    int sid;
    char name[30];
    int fees;
}s[size];
void scanStudentDetails();
void displayStudentDetails(struct student s[]);

int main()
{
    scanStudentDetails();
    displayStudentDetails(s);
}
void scanStudentDetails()
{
    int i,temp;
    for(i=0;i<size;i++)
    {
        printf("\nenter value of sid and name");
        scanf("%d %s",&s[i].sid,s[i].name);
        printf("\nenter the fees");
        scanf("%d",&temp);
        s[i].fees=temp;
    }
}
void displayStudentDetails(struct student s[])
{
    int i;
    printf("\n id\t name\t fees");
    for(i=0;i<size;i++){
    printf("\n%d\t%s\t%d",s[i].sid,s[i].name,s[i].fees);
    }
}

