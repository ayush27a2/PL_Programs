#include <stdio.h>
#include <stdlib.h>
void main()
{
    float a, l, b, base, ht, ar1, ar2, ar3;
    int ch;
    do
    {
        printf("Press 1 To Compute area of square and print\n");
        printf("Press 2 To Compute area of rectangle and print\n");
        printf("Press 3 To Compute Compute area of triangle and Print\n");
        printf("Press 4 To Exit\n");
        printf("Enter Your Choice :-\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter side of Square : ");
            scanf("%f", &a);
            ar1 = a * a;
            printf("Area of Square is %.2f\n", ar1);
            break;
        case 2:
            printf("Enter Lenght and Breadth of Rectangle (as l,b) : ");
            scanf("%f,%f", &l, &b);
            ar2 = l * b;
            printf("Area of Rectangle is %.2f\n", ar2);
            break;
        case 3:
            printf("Enter Base and Height of Triangle (as base,height) : ");
            scanf("%f,%f", &base, &ht);
            ar3 = 0.5 * base * ht;
            printf("Area of Triangle is %.2f\n", ar3);
            break;
        case 4:
            exit(ch);
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    } while (ch >= 1 && ch <= 1000);
}