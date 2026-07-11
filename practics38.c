// check character is upper case or not
#include<stdio.h>
int main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        printf("the character is uppercas");
    }
    else{
        printf("the character is not a uppercase");
    }
}