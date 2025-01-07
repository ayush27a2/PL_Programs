#include<stdio.h>
void main()
{
    int n,d,flag=0;
    printf("Enter any number for checking binary number : ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d==1||d==0)
        {
            n=n/10;
            continue;
        }
        else
        {
          flag=1;
          break;
        }
    }
    if(flag==0)
    {
        printf("Entered Number is a Binary Number.");
    }
    else
    {
    printf("Entered Number is NOT a Binary Number.");
    }
}