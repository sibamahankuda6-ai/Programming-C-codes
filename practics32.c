#include<stdio.h>//reverse a given number
int main()
{
    int num,reversed=0,remainder;
    printf("enter the number:");
    scanf("%d",&num);
    while(num != 0)
    {
        remainder=num % 10;//get last digit
        reversed=reversed * 10 + remainder;//append digit to reverse
        num=num/10;//remove last digit
    }
    printf("reverse the number:%d",reversed);
    
    return 0;
}

