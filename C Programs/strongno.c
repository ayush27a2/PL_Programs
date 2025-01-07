#include<stdio.h>

int main(){
    int n,i,fact=1,sum=0,temp,d;
    printf("Enter any no :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
       d=n%10;
       for(i=1;i<=d;i++)
       {
        fact=fact*i;
       }
       sum=sum+fact;
       fact=1;
       n=n/10;
    }
    if(sum==temp)
    {
        printf("strong no.");
    }
    else{
        printf("Not strong no.");
    }
}