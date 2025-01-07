#include<Stdio.h>
void main()
{
    float r,h,sa,v;
    printf("Enter Radius of Cylinder (in cm): ");
    scanf("%f",&r);
    printf("Enter Height of Cylinder (in cm): ");
    scanf("%f",&h);
    sa = (2*3.14*r*r)+(2*3.14*r*h);
    v = 3.14*r*r*h;
    printf("Surface Area of Cylinder (in cm) = %f\n",sa);
    printf("Volume of Cylinder (in cm) = %f",v);
}
