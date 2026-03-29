//write a program to calculate the compound interast
#include<stdio.h>
int main()
{
    float p,ri,t,n,ci;       //p=principal amount,ri=rate of interst,t=time //n=number of compounding period per year,  ci=compound interest
    printf("enter p,ri,t,n:");
    scanf("%f %f %f %f",&p,&ri,&t,&n);
    ci=p*(1+ri/n)^(n*t);
    printf("the compound interst is:%f",ci);
    
    return 0;
                                
}