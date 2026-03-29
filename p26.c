//write a program to demostrate the use of bitwise operator
#include<stdio.h>
int main()
{
    int a,b,s;    //s=bitwise sum
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    s=a^b;
    printf("s is:%d",s);

    return 0;
}
