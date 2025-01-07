#include<stdio.h>
void main()
{
    int n,i;
    printf("The series of odd Natural Numbers upto n :-\n");
    printf("Enter series Range (i.e value of n): ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
        printf("%d ",i);
        }
    }
}