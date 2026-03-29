#include<stdio.h>//check even and odd
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    num%2==0?printf("even"):printf("odd");
}
