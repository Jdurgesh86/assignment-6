#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
       
    for(i=2;i<num;i++)
        if(num%i==0)
           {
            printf("not a prime number");
            break;
           }
    if(i==num || num==2)
        printf("prime number");
}