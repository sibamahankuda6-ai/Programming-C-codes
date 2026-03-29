//write a program to find the minimum and maximum of three numbers
#include<stdio.h>
int main()
{
    int a,b,c,abmax,maximum,abmin,minimum;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    abmax=((a+b)+abs(a-b))/2;
    maximum=((abmax+c)+abs(abmax-c))/2;

    abmin=((a+b)-abs(a-b))/2;
    minimum=((abmin+c)-abs(abmin-c))/2;

    printf("the maxmimum is:%d\n",maximum);
    printf("the minimum is:%d",minimum);

    return 0;

}