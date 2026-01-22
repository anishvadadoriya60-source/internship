#include <stdio.h>
int oddsumFun(int no);
int evensumFun(int no);
int sumFun(int no);

int main() {
    int no,oddsum,evensum;
    printf("enter a numbber");
    scanf("%d",&no);
    oddsum=oddsumFun(no);
    evensum=evensumFun(no);
    printf("\nthe sum of odd digits in %d is %d",no,oddsum);
    printf("\nthe sum of even digits in %d is %d",no,evensum);

}
int oddsumFun(int no)
{
    int oddSum,temp=0,oddDigit=0;
    while(no>0)
    {
        temp=no%10;
        if(temp%2!=0)
        {
            oddDigit=oddDigit*10+temp;
        }
        no=no/10;
    }
    oddSum=sumFun(oddDigit);
    return oddSum;
}
int evensumFun(int no)
{
    int evenSum,temp=0,evenDigit=0;
    while(no>0)
    {
        temp=no%10;
        if(temp%2==0)
        {
            evenDigit=evenDigit*10+temp;
        }
        no=no/10;
    }
    evenSum=sumFun(evenDigit);
    return evenSum;
}
int sumFun(int no)
{
    int temp=0,sum=0;
    while(no>0)
    {
        temp=no%10;
        sum=sum+temp;
        no=no/10;
    }
    return sum;
}