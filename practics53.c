#include<stdio.h> //grade sheet of a student
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>=80 && num<=100)
    {
        printf("grade A");
    }
    else if(num>=60 && num<=79)
    {
        printf("grade B");
    }
    else if(num>=40 && num<=59)
    {
        printf("grade C");
    }
    else if(num>=34 && num<=39)
    {
        printf("grade d");
    }
    else
    {
        printf("grade E");
    }
    return 0;
}