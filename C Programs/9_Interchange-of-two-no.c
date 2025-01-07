#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After Interchanging :-\nValue of a = %d\nValue of b = %d",a,b);
}
