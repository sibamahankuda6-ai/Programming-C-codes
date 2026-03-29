//write a program to calculate the simple interest
#include<stdio.h>
int main()
{
    float pa,ri,t,si;   //pa=principal amount, ri=rate of interest, t=time ,si=simple interst
    printf("enter pa,ri,t:");
    scanf("%f %f %f",&pa,&ri,&t);
    si=pa*ri*t/100;
    printf("the simple interest is:%f",si);

    return 0;
}