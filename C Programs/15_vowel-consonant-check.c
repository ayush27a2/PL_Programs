#include<stdio.h>
void main()
{
    char l_ch;
    printf("Enter any Lowercase Character : ");
    scanf("%c",&l_ch);
    if(l_ch=='a'||l_ch=='e'||l_ch=='i'||l_ch=='o'||l_ch=='u')
    {
        printf("%c is a Vowel.",l_ch);
    }
    else
    {
        printf("%c is a Consonant.",l_ch);
    }
}
