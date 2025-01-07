#include<stdio.h>
char ch;
void main()
{
        printf("Enter any Character : ");
        scanf("%c",&ch);
        {
        if(ch>='0'&&ch<='9')
            printf("%c is a Digit.",ch);
        else if(ch>='A'&&ch<='Z')
            printf("%c is an Uppercase Character.",ch);
        else if(ch>='a'&&ch<='z')
            printf("%c is a Lowercase Character.",ch);
        else
            printf("%c is a Special Character.",ch);
        }
}
