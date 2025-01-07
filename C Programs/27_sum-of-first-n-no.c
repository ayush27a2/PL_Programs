#include<stdio.h>
void main()
{
    int sum,n;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    sum = n*(n+1)*0.5;
    printf("Sum of First %d Numbers is %d",n,sum);
}