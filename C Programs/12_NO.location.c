#include<stdio.h>
void main()
{
    int a,b,c,i,flag=0;
    printf("Enter Three Numbers (as a,b,c): ");
    scanf("%d,%d,%d",&a,&b,&c);
    for(i=b+1;i<c;i++)
    {
        if(i==a)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%d is in Between %d and %d.",a,b,c);
    }
    else
    {
        printf("%d is not in Between %d and %d.",a,b,c);
    }
}
