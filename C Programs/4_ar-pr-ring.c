#include<stdio.h>
void main()
{
    float r,R,ar,pr;
    printf("Enter Inner Radius of Ring :");
    scanf("%f",&r);
    printf("Enter Outer Radius of Ring : ");
    scanf("%f",&R);
    ar = 3.14*(R*R-r*r);
    pr = 2*3.14*(R+r);
    printf("Perimeter of Ring = %f\nArea of Ring = %f",pr,ar);
}