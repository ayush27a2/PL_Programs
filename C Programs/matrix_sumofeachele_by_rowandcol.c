#include<stdio.h>
void main()
{
    int a[3][3],i,j,r1=0,r2=0,r3=0,c1=0,c2=0,c3=0;
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
                r1=r1+a[i][j];
            }
            if(i==1)
            {
                r2=r2+a[i][j];
            }
            if(i==2)
            {
                r3=r3+a[i][j];
            }
            if(j==0)
            {
                c1=c1+a[i][j];
            }
            if(j==1)
            {
                c2=c2+a[i][j];
            }
            if(j==2)
            {
                c3=c3+a[i][j];
            }
        }
    }
    printf("The sum of Elements of Row 1 = %d\n",r1);
    printf("The sum of Elements of Row 2 = %d\n",r2);
    printf("The sum of Elements of Row 3 = %d\n",r3);
    printf("The sum of Elements of Column 1 = %d\n",c1);
    printf("The sum of Elements of Column 2 = %d\n",c2);
    printf("The sum of Elements of Column 3 = %d\n",c3);
}