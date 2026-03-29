//find the largest of three numbers
#include<stdio.h>
int main()
{
    int a,b,c,largest,max1;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    max1=((a+b)+abs(a-b))/2;     //finds largest of a nad b           //abs=convert nagative value to positive value
    largest=((max1+c)+abs(max1-c))/2;   //find largest
    printf("the largest is:%d",largest);

    return 0;
}