#include<stdio.h>
void main()
{
    float u,v,t,a,s;
    printf("Enter Initial Velocity (in m/sec) : ");
    scanf("%f",&u);
    printf("Enter Acceleration (in m/sec^2) : ");
    scanf("%f",&a);
    printf("Enter Time (in sec): ");
    scanf("%f",&t);
    v = u + a*t;
    s = u*t + (a*t*t)/2;
    printf("Final Velocity (in m/sec) = %f\n& Distance travelled (in m) = %f",v,s);
}
