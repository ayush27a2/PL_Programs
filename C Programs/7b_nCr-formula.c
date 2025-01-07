#include<stdio.h>
int nCr(int m,int t)
{
    int nCr,f=1,i,j=1,k=1;
    for(i=1;i<m+1;i++)
    {
        f = f*i;
    }
    for(i=1;i<t+1;i++)
    {
        j = j*i;
    }
    for(i=1;i<(m-t)+1;i++)
    {
        k = k*i;
    }
    nCr = f/(j*k);
    printf("Value of %dC%d = %d ",m,t,nCr);
    return 0;
}
void main()
{
    int n,r;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Enter value of r : ");
    scanf("%d",&r);
    nCr(n,r);
}
