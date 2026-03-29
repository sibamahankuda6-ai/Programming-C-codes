#include<stdio.h>//to calculate the sum and avarage of three number
int main()
{
    int sum,a,b,c;
    float average;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    average=sum/3;
    printf("sum is:%d average is:%f",sum,average);
    return 0;


}