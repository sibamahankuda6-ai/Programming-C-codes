#include<stdio.h>//both divigible by 3 and 5
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if((a%3==0)&&(a%5==0))
    {
        printf("number is divisible by both 3 and 5");
    }
    else
    {
        printf("not divisible by both 3 and 5");
    }
    return 0;
}