#include<stdio.h>//find the lcm of two number
int main()
{
    int a,b,num1,num2,gcd,lcm;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
     num1=a;//store original values
     num2=b;
    while(b!=0)
    {
        int temp=b;//temperary variable save current value of b
        b=a%b;//update b with remainder
        a=temp;//assign old b in a
    }
    gcd=a;
    lcm=(num1*num2)/gcd;
    printf("Lcm %d",lcm);
    return 0;
}