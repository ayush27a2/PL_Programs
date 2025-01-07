#include<stdio.h>
void main()
{
    float a,b,AM,HM;
    printf("Enter Two Numbers (as a,b) : ");
    scanf("%f,%f",&a,&b);
    AM = (a+b)/2;
    HM = (a*b)/(a+b);
    printf("Arithmetic Mean of %f and %f = %f\nHarmonic Mean of %f and %f = %f",a,b,AM,a,b,HM);
}
