#include<stdio.h>
int main()
{
    int num,rnum=0;
    printf("Enter the number ")
    scanf("%d",&num);
    while(num!=0)
    {
        rnum=num%10+rnum*10;
        num/=10;
    }
    printf("The reverse number is %d",rnum);
}