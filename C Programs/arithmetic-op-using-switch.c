#include<stdio.h>
void main()
{
    int a,b;
    char opt;
        printf("Enter two numbers (as a,b) : ");
        scanf("%d,%d",&a,&b);
        fflush(stdin); //clear buffer
        printf("Enter any arithmetic operator[+,-,/,*,%] : ");
        scanf("%c",&opt);
        switch(opt)
        {
        case '+':
            printf("Addition=%d",a+b);
            break;
        case '-':
             printf("Subtraction=%d",a-b);
            break;
        case '*':
             printf("Multiplication=%d",a*b);
            break;
        default:
            printf("Invalid arithmetic operator");
            break;
        case '/':
             printf("Division=%d",a/b);
            break;
        case '%':
             printf("Remainder=%d",a%b);
             break;
        }
}
