#include<stdio.h>
int main()
{
    int num,i=0;
    scanf("%d",&num);
    while(num)
    {
        num=num/10;
        i++;
    }
    printf("the total digits are %d",i);
}