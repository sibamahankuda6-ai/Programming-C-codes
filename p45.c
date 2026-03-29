//Implete a program to check if a character is digit
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    (ch>='0'&& ch<='9')?printf("character is digit"):printf("character is not a digit");

    return 0;

}