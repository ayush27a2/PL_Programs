#include<stdio.h>
void main()
{
    float fh,c,k;
    printf("Enter Temperature (in Fahrenheit) : ");
    scanf("%f",&fh);
    c = (fh-32)*5/9;
    k = c + 273.15;
    printf("Temperature in Celsius = %f\n&Temperature in Kelvin = %f",c,k);
}
