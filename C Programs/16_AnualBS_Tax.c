#include<stdio.h>
void main()
{
    float bs,tax;
    printf("Enter Annual Basic Salary : ");
    scanf("%f",&bs);
    if(bs<15000)
    {
        tax = bs*0/100;
    }
    else if(bs>=150000&&bs<=300000)
    {
        tax = bs*0.2;
    }
    else if(bs>300000)
    {
        tax = bs*0.3;
    }
    else
    {
        printf("Invalid");
    }
    printf("Annual Basic Salary is %.2f & Tax = %.2f",bs,tax);
}
