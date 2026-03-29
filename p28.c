//write a program to set the nth bit of a program
#include<stdio.h>
int main()
{
int num,nth,result;
printf("enter a number:");
scanf("%d",&num);

printf("enter the bit position(starting fron 0):");
scanf("%d",&nth);

result=num|(1<<nth);

printf("number after %dth bit:%d\n",nth,result);

return 0;
}