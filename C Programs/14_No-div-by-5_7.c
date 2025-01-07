#include<stdio.h>
void main()
{
    int n;
    printf("Enter any Number : ");
    scanf("%d",&n);
    if(n%5==0&&n%7==0)
    {
        printf("%d is Divisible by 5 and 7.",n);
    }
    else
    {
        printf("%d is  NOT Divisible by 5 and 7.",n);
    }
}
