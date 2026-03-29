//write a program to if a character is vowel or consonent
#include<stdio.h>
int main()
{
  char ch;
  printf("enter a character:");
  scanf("%c",&ch);
  (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')?printf("character is vowel"):printf("character is consonent");

  return 0;


}