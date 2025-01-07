#include<stdio.h>
void main()
{
    int n,fact=1,i;
    printf("Enter any number : ");
    scanf("%d",&n);
    i=1;
    factorial:
    if(i<=n)
    {
        fact=fact*i;
        i++;
        goto factorial;
    }
    printf("Factorial value = %d",fact);
}