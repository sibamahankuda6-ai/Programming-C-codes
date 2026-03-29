//To demostrate the use of logical operaters
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    (a>0)&&printf("positive");
    (a<0)&&printf("negative");
    (a==0)&&printf("zero");

    return 0;
}