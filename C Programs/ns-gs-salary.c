#include<stdio.h>
void main()
{
    double bs,gs,ns,hra,da,ta,ma,pf;
    printf("Enter Basic Salary : ");
    scanf("%lf",&bs);
    hra=bs*40/100;
    da=bs*90/100;
    ta=bs*20/100;
    ma=bs*10/100;
    pf=bs*10/100;
    gs=bs+hra+da+ta+ma+pf;
    ns=gs-pf;
    printf("Gross salary =%lf",gs);
    printf("Net salary=%lf",ns);
}
