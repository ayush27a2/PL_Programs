#include<stdio.h>
void main()
{
    int a[3][3],i,j,flag=0;
    printf("Enter value of matrix\n");
    for(i=0;i<3;i++) //for row
    {
        for(j=0;j<3;j++) //for column
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix is:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=1;
            }
        }
    }
    if(flag==0)
            {
                printf("The Matrix is a Symmetrix Matrix.");
            }
            else
            {
                printf("The Matrix is NOT a Symmetrix Matrix.");
            }
}