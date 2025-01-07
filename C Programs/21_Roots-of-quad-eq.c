#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,x1,x2;
    printf("Enter Coefficient of x^2 (i.e a) : ");
    scanf("%f",&a);
    printf("Enter Coefficient of x (i.e a) : ");
    scanf("%f",&b);
    printf("Enter Constant (i.e c) : ");
    scanf("%f",&c);
    x1 = (-b+pow(b*b-4*a*c,0.5))/(2*a);
    x2 = (-b-pow(b*b-4*a*c,0.5))/(2*a);
    printf("All Possible Values of x in Quadratic Equation: ax^2+bx+c are :-\n");
    printf("x1 = %.2f\n",x1);
    printf("x2 = %.2f",x2);
}
