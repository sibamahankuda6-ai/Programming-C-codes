#include<stdio.h>//largest of three number
int main()
{
    int a,b,c;
    printf("enter a number");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("largest is a");
    }
    if(b>=a && b>=c)
    {
        printf("largest is b");
    }
    else{
        printf("largest is c");
    }
    return 0;
}