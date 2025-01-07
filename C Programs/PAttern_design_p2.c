#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number of lines");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=n+1-i;j--)    
        {                                       
            printf("%d\t",j);                      
        }                                          
        printf("\n");                          
    }
}
/*2nd logic : - for(i=1;i<=n;i++)
                {
                  for(j=n;j>=i;j--)
                  {
                    printf("%d\t",j);
                  }
                   printf("\n");
                }*/
                                                