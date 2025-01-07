#include<stdio.h>
void main()
{
    int a[3][3],i,j,ut_matrix=0,lt_matrix=0;
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
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            {
                ut_matrix=ut_matrix+a[i][j];
            }
            if(i>j)
            {
                lt_matrix=lt_matrix+a[i][j];
            }
        }
    }
    printf("The sum of Upper Triangular Matrix = %d\n",ut_matrix);
    printf("The sum of Lower Triangular Matrix = %d\n",lt_matrix);
}