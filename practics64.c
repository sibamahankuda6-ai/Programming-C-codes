#include<stdio.h>//find the sum of digits of a number using do while loop
int main()
{
    int num,sum=0,digit;
    printf("enter the number");
    scanf("%d",&num);
    do
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    while(num>0);
    
      printf("sum of digit %d",sum);
    
   
    
    return 0;
}