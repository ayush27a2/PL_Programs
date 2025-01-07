#include<stdio.h>
int main()
{
    int n,sum=0,d;
    printf("Enter any Number :");
    scanf("%d",&n);
    digitsum:
    if(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
        goto digitsum;
    }
    printf("Sum of digits = %d",sum);
}