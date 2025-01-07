#include<stdio.h>
void main()
{
    int n,x,rs=1,i;
    printf("Enter Two Integers (x,n) : ");
    scanf("%d,%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        rs = rs*x;
    }
    printf("Value of %d^%d is %d",x,n,rs);
}