//convert a given temparature from celsius to fahrenheit
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("enter the celsius value:");
    scanf("%f",&celsius);
    fahrenheit=9/5*celsius+32;
    printf("the fahrenheit value is:%f",fahrenheit);
    return 0;
}
