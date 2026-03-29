#include<stdio.h>//user input name,age,marks and display it
int main()
{
int age,mark;
char name[30];
printf("enter the name and mark and age");
scanf("%s %d %d",name,&mark,&age);
printf("name is %s",name);
printf("mark is %d",mark);
printf("age is %d",age);
return 0;

}