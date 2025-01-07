#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any Character : ");
    scanf("%c",&ch);
    switch(ch)
    {
    case '0'...'9':
        printf("%c is a Digit.",ch);
        break;
    default :
        printf("%c is not a Digit.",ch);
        break;
    }
}
