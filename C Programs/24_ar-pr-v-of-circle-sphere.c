#include <stdio.h>
#include <stdlib.h>
void main()
{
    float r, ar, pr, v;
    int ch;
    do
    {
        printf("Enter a Radius (in cm) : ");
        scanf("%f", &r);
        printf("Press 1 To Compute area of circle and print\n");
        printf("Press 2 To Compute Circumference of circle and print\n");
        printf("Press 3 To Compute Volume of Sphere and print\n");
        printf("Press 4 To Exit\n");
        printf("Enter Your Choice :-\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            ar = 3.14 * r * r;
            printf("Area of Circle is %.2f\n", ar);
            break;
        case 2:
            pr = 2 * 3.14 * r;
            printf("Circumference of Circle is %.2f\n", pr);
            break;
        case 3:
            v =  (4*3.14 * r * r * r)/3;
            printf("Volume of Sphere is %.2f\n", v);
            break;
        case 4:
            exit(ch);
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    } while (ch >= 1 && ch <= 4);
}