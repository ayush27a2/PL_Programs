#include<stdio.h>
void main()
{
    int a[3][3],i,j,d1=0,d2=0;
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
          if(i==j)
          {
            d1=d1+a[i][j];
          }
          if(i+j==2)
          {
            d2=d2+a[i][j];
          }
        }
    }
    printf("Sum of 1st Diagonal = %d\n",d1);
    printf("Sum of 2nd Diagonal = %d\n",d2);
}