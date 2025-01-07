#include<stdio.h>
void main()
{
    int h,m,s;
    printf("Enter the Time (as Hours,minutes,seconds) : ");
    scanf("%d,%d,%d",&h,&m,&s);
    if((0<=h&&h<24)&&(0<=m&&m<60)&&(0<=s&&s<60))
    {
        printf("Time -> %d hrs:%d mins:%d secs is Valid",h,m,s);
    }
    else
    {
        printf("Time -> %d hrs:%d mins:%d secs is Invalid",h,m,s);
    }
}
