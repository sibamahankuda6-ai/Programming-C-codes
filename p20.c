//write a program to convert kelometer to miles
#include<stdio.h>
int main()
{
    float kelometer,mile;
    printf("enter the kelometer:");
    scanf("%f",&kelometer);
    mile=kelometer*0.621;
    printf("the mile is:%f",mile);

    return 0;
}