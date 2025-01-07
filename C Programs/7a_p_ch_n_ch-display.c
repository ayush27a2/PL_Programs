#include<stdio.h>
void main()
{
    char ch,p_ch,n_ch;
    printf("Enter any Character : ");
    scanf("%c",&ch);
    p_ch = ch-1;
    n_ch = ch+1;
    printf("The Previous Character is %c, The Next Character is %c",p_ch,n_ch);
}
