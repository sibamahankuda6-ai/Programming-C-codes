# include<stdio.h>//check prime number using while loop
int main()
{
int num,i=1,count=0;
printf("enter a number");
scanf("%d",&num);
while(i<=num){
    if(num%i==0)
    {
        count++;
    }
    i++;
}
if(count==2)
{
    printf("prime number");
}
else{
    printf("not a prime number");
}
return 0;
}