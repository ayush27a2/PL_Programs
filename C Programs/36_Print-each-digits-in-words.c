#include <stdio.h>
void main()
{
    int n, d, i, rev = 0, num, t;
    printf("Enter any Number : ");
    scanf("%d", &n);
    num = n;
    for (; n > 0;)
    {
        d = n % 10;
        rev = (rev * 10) + d;
        n = n / 10;
    }
    for (; rev > 0;)
    {
        t = rev % 10;
        rev=rev/10;
        switch (t)
        {
        case 0:
            printf("Zero-");
            break;
        case 1:
            printf("One-");
            break;
        case 2:
            printf("Two-");
            break;
        case 3:
            printf("Three-");
            break;
        case 4:
            printf("Four-");
            break;
        case 5:
            printf("Five-");
            break;
        case 6:
            printf("Six-");
            break;
        case 7:
            printf("Seven-");
            break;
        case 8:
            printf("Eight-");
            break;
        case 9:
            printf("Nine-");
            break;
        default:
            printf("InValid Value");
            break;
        }
    }
}