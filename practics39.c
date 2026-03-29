#include<stdio.h>//factorial of a number
int main()
{
    int factorial=1,a,i;
    printf("enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial of number is %d",factorial);
    return 0;
}