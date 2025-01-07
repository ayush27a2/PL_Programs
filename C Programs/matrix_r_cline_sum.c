#include<stdio.h>
void main()
{
    int a[3][3],i,j,top=0,bottom=0,left=0,right=0;
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
          if(i==0)
          {
          top = top+a[i][j];
          }
          if(i==2)
          {
          bottom = bottom+a[i][j];
          }
          if(j==0)
          {
          left = left+a[i][j];
          }
          if(j==2)
          {
          right = right+a[i][j];
          }
        }
    }
    printf("Sum of Top = %d\n",top);
    printf("Sum of Bottom = %d\n",bottom);
    printf("Sum of Left = %d\n",left);
    printf("Sum of Right = %d\n",right);
}