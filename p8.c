//write a program to perform addition,substraction,multification,division of two number
#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("addition is: %d\n substraction is:%d\n multification is:%d\n division is:%d",add,sub,mul,div);

    return 0;
}