//Implement a program to calculate the square root 
#include<stdio.h>
int main()
{
    int num,squareroot;
    printf("enter a numbner:");
    scanf("%d",&num);
    squareroot=num^(1/2);
    printf("square root is:%d",squareroot);

    return 0;
}