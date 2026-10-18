//calculate the area and circumference of a circle
#include<stdio.h>
int main()
{
    
    float radius,area,circumference,p=3.141;
    printf("enter the radius:");
    scanf("%f",&radius);
    area=p*radius*radius;
    circumference=2*p*radius;
    printf("ares fo circle is:%f\n circumference of circle is:%f",area,circumference);

    return 0;
}
