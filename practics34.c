#include<stdio.h>//find the gcd of two number
int main()
{
    int a,b,gcd;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        int temp=b;//temperary variable save current value of b
        b=a%b;//update b with remainder
        a=temp;//assign old b in a
    }
    gcd=a;
    printf("gcd%d",gcd);
    return 0;
}