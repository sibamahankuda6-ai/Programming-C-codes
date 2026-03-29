#include<stdio.h>//use of relational operator
int main()
{
int a,b,smaller;
printf("enter two numbers");
scanf("%d %d",&a,&b);
smaller=a<b;
printf(" smaller %d",smaller);
return 0;
}