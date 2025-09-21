//program to swap two numbers without third variavle
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("before swapping a=%d b=%d\n",a,b);
       a=a^b;
       b=b^a;
       a=a^b; 
    printf("after swapping a=%d b=%d",a,b);
    return 0;
}