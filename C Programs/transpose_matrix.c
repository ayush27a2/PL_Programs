#include<stdio.h>
void main()
{
    int a[2][3],i,j;
    printf("Enter value of matrix");
    for(i=0;i<2;i++) //for row
    {
        for(j=0;j<3;j++) //for column
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}