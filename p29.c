//Develop a program to count the number of set bits in a binary number
# include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter a number:");
    scanf("%d",&num);

    int tem=num;  //store original number
    while(num>0){
        if(num & 1)
        count++;
        num=num>>1;   //shift bits to right
    }

     printf("number of set bits in %d is:%d\n",tem,count);

     return 0;

        
    

}