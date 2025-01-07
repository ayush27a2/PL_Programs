#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the Sides of any Triangle (as a,b,c) : ");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        printf("Triangle is Valid.");
    }
    else
    {
        printf("Triangle is Invalid.");
    }
}
