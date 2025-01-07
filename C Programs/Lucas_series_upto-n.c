#include <stdio.h>
void main()
{
    int i, a = 1, b = 1, c = 1, d;
    printf("Lucas Series Upto 20 terms are :-\n");
    printf("%d,%d,%d,", a, b, c);
    for (i = 4; i <= 20; i++)
    {
        d = a + b + c;
        printf("%d,", d);
        a = b;
        b = c;
        c = d;
    }
}