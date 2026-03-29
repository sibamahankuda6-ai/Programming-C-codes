//Implement a program to demostrate type casting in c
#include<stdio.h>
int main()
{
    int a=10,b=3;
    float result1,result2;
    result1=a/b;

    printf("withour type casting(a/b): %.2f\n",result1);
    result2=(float)a/b;
    printf("with type casting (float)a/b: %.2f\n",result2);

    return 0;
}                                       