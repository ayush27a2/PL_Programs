#include<stdio.h>
void main()
{
    float X,sum=0,i;
    int n;
    printf("Enter any Real Number : ");
    scanf("%f",&X);
    printf("Enter value of n (no. of terms): ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        sum = sum + (2*i*X+X);
    }
    printf("Sum of %d terms of the series X+3X+5X+7X+... = %.2f",n,sum);
}