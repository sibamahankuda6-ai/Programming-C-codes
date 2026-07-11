#include<stdio.h>//sum of the 1st n even numbers using for loop
int main()
{
    int n,i,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      sum += 2*i;
    }
    printf("sum of the 1st n even number is %d",sum);
    return 0;
}