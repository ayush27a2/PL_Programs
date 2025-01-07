#include<stdio.h>
void main()
{
    int bs,hs,hr,da,pt,emp_id;
    printf("Enter Basic Salary : ");
    scanf("%d",&bs);
    printf("Enter Employee Id : ");
    scanf("%d",&emp_id);
    hr = bs*10/100;
    da = bs*30/100;
    pt = bs*5/100;
    hs = bs+hr+da-pt;
    printf("Home Salary of (Employee id : %d) is %d",emp_id,hs);
}
