#include<stdio.h>//use of modulus operstor
int main()
{
    int a,b,modulus;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
   modulus=a%b;
   printf("modulus is %d",modulus);
}