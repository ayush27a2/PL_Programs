#include<stdio.h>
#include<math.h>
void main()
{
    int n, i, sum = 0,d, num,p=0,temp;
    printf("Enter any Number : ");
    scanf("%d", &n);
    num = n;
    temp=n;
    while (n != 0)
    {
        d = n % 10;
        p++;
        n = n / 10;
    }
    while(num>0)
    {
        d = num%10;
        sum = sum + pow(d,p);
        num = num/10;
    }
    if (sum == temp)
    {
        printf("%d is an Armstrong Number.", temp);
    }
    else
        printf("%d is NOT an Armstrong Number.", temp);
}