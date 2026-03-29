//develope a program to check weater a yesr is leap year
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    (year%4==0)?printf("leap year"):printf("not leap year");
    return 0;
}