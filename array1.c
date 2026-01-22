#include<stdio.h>
int main()
{
    int i, a[5];
    printf("enter value of array");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
        for(i=0;i<5;i++)
    {
        printf("%d   ", a[i]);
    }
}