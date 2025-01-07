#include <stdio.h>
void main()
{
    int n, s, i, d, flag = 0;
    printf("Enter any Number : ");
    scanf("%d", &n);
    printf("Enter any Searching digit : ");
    scanf("%d", &s);
    while (n > 0)
    {
        d = n % 10;
        if (d != s)
        {
            n = n / 10;
            continue;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Digit is available.");
    }
    else
    {
        printf("Digit is NOT available.");
    }
}