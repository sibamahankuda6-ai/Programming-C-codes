#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a>0 && a%2==0)
    {
        printf("the number is positive and even");
    }
    else
    {
        printf("the number is not positive and even");
    }
}