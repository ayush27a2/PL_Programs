#include<stdio.h>
void main()
{
    float l,b,h,sr,v;
    printf("Enter Length,Breadth and Height of Cuboid (as l,b,h) : ");
    scanf("%f,%f,%f",&l,&b,&h);
    sr = 2*(l*b+b*h+h*l);
    v = l*b*h;
    printf("%f is the Surface Area of Cuboid\n%f is the Volume of Cuboid",sr,v);
}
