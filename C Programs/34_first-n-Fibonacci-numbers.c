#include <stdio.h>
void main()
{
    int i, n, pv = 0, nv = 1, j, cv;
    printf("Enter Value of n : ");
    scanf("%d", &n);
    printf("%d,%d",pv,nv);
    for (i = 2; i <= n; i++)
    {
        cv = pv + nv;
        printf(",%d",cv);
        pv = nv;
        nv = cv;
    }
}