#include<stdio.h>//basic calculator operation using switch case
int main()
{
    int  a,b,choice;
    
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    
    
    printf("enter the choice(1-5)");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("addition %d",a+b);
            break;
        }
        case 2:
        {
            printf("subtraction %d",a-b);
            break;
        }
        case 3:
        {
            printf("multiplication %d",a*b);
            break;
        }
        case 4:
        {
            printf("division %d",a/b);
            break;
        }
        case 5:
        {
            printf("modulus %d",a%b);
            break;
        }

        
    }
    return 0;
}