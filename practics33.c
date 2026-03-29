#include<stdio.h>//check if a number is palindrome 
int main()
{
    int num,reversed=0,remainder,original;
    printf("enter the number:");
    scanf("%d",&num);
    original=num;//store original number
    while(num != 0)
    {
        remainder=num % 10;//get last digit
        reversed=reversed * 10 + remainder;//append digit to reverse
        num=num/10;//remove last digit
    } 
    if(original==reversed)
    {
        printf("number is a palindrome number :%d",original);
    }
    else{
        printf("number is not a palindrome number :%d",original);
    
    }
    return 0;
}