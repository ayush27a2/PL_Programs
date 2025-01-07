#include<stdio.h>
int lcm()
{
    int a,b,c,lcm;
    printf("Enter Three Numbers [as a,b,c] : ");
    scanf("%d,%d,%d",&a,&b,&c);
    //LCM.
    lcm=a>b&&a>c?a:(b>c?b:c);
    while(lcm%a!=0||lcm%b!=0||lcm%c!=0)
    {
        lcm++;
    }
    printf("LCM = %d",lcm);
}
void main()
{
    lcm();
}