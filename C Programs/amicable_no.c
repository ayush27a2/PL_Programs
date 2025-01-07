#include<stdio.h>
int n1,n2,sum1=0,sum2=0,i;
void main()
{
    printf("Enter First Number : ");
    scanf("%d",&n1);
    printf("Enter Second Number : ");
    scanf("%d",&n2);
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(i=1;i<n2;i++)
    {
        if(n2%i==0)
        {
            sum2=sum2+i;
        }
    }
    if(sum1==n2&&sum2==n1)
    {
        printf("Amicable Numbers");
    }
    else
    {
        printf("Not Amicable Number");
    }
}