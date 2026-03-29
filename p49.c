// Write a program to find the number of trailing zeroes in a factorial.
#include<stdio.h>
int main()
    {
        int divident,divisor,remainder;
        printf("enter the divident:");
        scanf("%d",&divident);

        printf("enter the divisor:");
        scanf("%d",&divisor);

        remainder=divident-(divident/divisor)*divisor;
        printf("the remainder is: %d",remainder);

        return 0;


    }
