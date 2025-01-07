#include <stdio.h>
void main()
{
    int rev=0, d, n, num;
    printf("Enter any Number : ");
    scanf("%d", &n);
    num = n;
    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    printf("Reverse of %d is %d", num, rev);
}