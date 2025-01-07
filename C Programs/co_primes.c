#include<stdio.h>
void main()
{
    int a,b,hcf;
    printf("Enter Two Number : ");
    scanf("%d,%d",&a,&b);
    hcf=a<b?a:b;
    while(a%hcf!=0||b%hcf!=0)
    {
        hcf--;
    }
    if(hcf==1)
    {
        printf("%d and %d are Co-Prime Numbers.",a,b);
    }
    else
    {
        printf("%d and %d are NOT Co-Prime Numbers.",a,b);
    }
}