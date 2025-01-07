#include<stdio.h>
void main()
{
    int rs,n,i;
    printf("Enter any Number : ");
    scanf("%d",&n);
    printf("Table of %d is :- \n",n);
    for(i=1;i<=10;i++)
    {
        rs = n*i;
        printf("%d x %d = %d\n",n,i,rs);
    }
}