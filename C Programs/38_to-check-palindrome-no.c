#include<stdio.h>
void main()
{
    int n,num,rev=0,d;
    printf("Enter any Number : ");
    scanf("%d",&n);
    num = n;
    while(n>0)
    {
        d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }
    if(rev==num)
    {
        printf("%d is a Palindrome Number.",num);
    }
    else
    {
        printf("%d is NOT a Palindrome Number.",num);
    }
}