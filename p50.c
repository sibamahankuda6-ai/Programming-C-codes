// Write a program to calculate the product of two floating-point numbers.
#include<stdio.h>
int main()
{
  float a,b,product;
  printf("enter two floating point numbers:");
  scanf("%f %f",&a,&b);
  product=a*b;

  printf("the product of two floating numbers is:%f",product);

  return 0;
}