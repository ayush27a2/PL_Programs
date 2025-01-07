#include<stdio.h>
char ch;
void main()
{
        printf("Enter any Character : ");
        scanf("%c",&ch);
        switch(ch)
        {
        case 48 ... 57:
            printf("%c is a Digit.",ch);
            break;
        case 65 ... 90:
            printf("%c is an Uppercase Character.",ch);
            break;
        case 97 ... 122:
            printf("%c is a Lowercase Character.",ch);
            break;
        default :
            printf("%c is a Special Character.",ch);
            break;
        }
}
