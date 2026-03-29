//Write a program to calculate the sum of the first n natural numbers. 
#include<stdio.h>
int main()
{
 int num,i,sum;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++){
    sum += i;
 }
    printf("the sum of 1st natural number is:%d",sum);
    return 0;
 

}