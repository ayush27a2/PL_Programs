#include<stdio.h>
void main()
{
    int n;
    printf("Enter any Integer : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is an Even Number.",n);
    else
        printf("%d is an Odd Number.",n);
}
