#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    printf("All Even Numbers upto %d are :- \n",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}