#include<stdio.h>//fibonacci series up to n terms using while loop
int main()
{
    int num,i=0,next,first=0,second=1;
    printf("enter a number");
    scanf("%d",&num);
    while(i<num)
    {
    if(i==0)
    {
      printf("%d",first);
    }
    else if(i==1)
    {
        printf("%d",second);
    }
    else{
    next=first+second;
    printf("%d",next);
    first=second;
    second=next;
    }
    i++;
}
return 0;
}