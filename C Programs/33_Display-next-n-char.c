#include<stdio.h>
void main()
{
    int n,i;
    char ch;
    printf("Enter any Character : ");
    scanf("%c",&ch);
    printf("Enter Value of n : ");
    scanf("%d",&n);
    printf("The Next %d Characters after %c are :-\n",n,ch);
    for(i=1;i<=n;i++)
    {
        ch = ch + 1;
        printf("%c\n",ch);
    }
}