#include<stdio.h>//power of a number
int main()
{
    int base,exponent,power=1,i;
    printf("enter base and exponent");
    scanf("%d %d",&base,&exponent);
    for(i=1;i<=exponent;i++)
    {
        power=power*base;
    }
     printf("power is %d",power);
     return 0;
}