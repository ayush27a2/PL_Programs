#include<stdio.h>
int n,i,rs;
void main()
{
    printf("Enter Any Number : ");
    scanf("%d",&n);
    printf("Table of %d is :-\n",n);
    for(i=1;i<=10;i++)
    {
        rs=n*i;
        printf("%d x %d = %d \n",n,i,rs);
    }
}