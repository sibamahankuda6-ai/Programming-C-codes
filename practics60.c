#include<stdio.h>
int main()
{
    int num,i,factorial=1;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial is %d",factorial);
    return 0;

}