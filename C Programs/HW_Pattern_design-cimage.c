#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if(j==1)
            {
            printf("C ");
            }
            if(j==2 && i!=1)
            {
                printf("I ");
            }
            if(j==3 && i!=1 && i!=2)
            {
                printf("M ");
            }
            if(j==4 && i!=1 && i!=2 && i!=3)
            {
                printf("A ");
            }
            if(j==5 && i!=1 && i!=2 && i!=3 && i!=4)
            {
                printf("G ");
            }
            if(j==6 && i!=1 && i!=2 && i!=3 && i!=4 && i!=5)
            {
                printf("E ");
            }
        }
        printf("\n");
    }
}