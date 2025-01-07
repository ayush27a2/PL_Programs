#include<stdio.h>
void main()
{
    int a[2][3],i,j,count1=0,count2=0;
    printf("Enter value of matrix\n");
    for(i=0;i<2;i++) //for row
    {
        for(j=0;j<3;j++) //for column
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++) //for row
    {
        for(j=0;j<3;j++) //for column
        {
            if(a[i][j]==0)
            {
                count1=count1+1;
            }
            else if(a[i][j]>0)
            {
                count2=count2+1;
            }
            printf("\n");
        }
    }
    printf("Total no. of zero elements = %d and non zero elements = %d",count1,count2);
}