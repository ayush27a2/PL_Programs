#include<stdio.h>
void main()
{
    int i,j,n=4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||j==1||i==5||j==5)
            {
            printf("%d",n);
            }
            else if(i==3&&j==3)
            {
                printf("%d",n-2);
            }
            else
            {
                printf("%d",n-1);
            }
        }
        printf("\n");
    }
}