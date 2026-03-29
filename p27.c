//implement a program to toggle the nth bit of a program    
#include<stdio.h>
int main()
{
    int num,nth,result;
    printf("enter a number:");
    scanf("%d",&num);

    printf("enter the bit position to toggle(starting from 0):");
    scanf("%d",&nth);

    result=num^(1<<nth);   //toggle nth bit

    printf("number after toggling %dth bit: %d\n",nth,result);

    return 0;


}