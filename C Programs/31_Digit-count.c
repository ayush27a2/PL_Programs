#include<stdio.h>
void main()
{
    int n,i,count=0,d,num;
    printf("Enter any Number : ");
    scanf("%d",&n);
    num=n;
    for(;n>0;)
    {
        d = n%10;
        count = count + 1;
        n = n/10; 
    }
    printf("Number of Digits in %d is %d",num,count);
}