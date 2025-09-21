#include<stdio.h>
int main()
{
    int a,fact=1;
    printf("enter a number to find its factorial:");
    scanf("%d",&a);
    if(a<0)
        printf("factorial of negative number doesn't exist");
    else
    {
        for(int i=1;i<=a;i++)
        {
            fact=fact*i;
        }
    }
    printf("the factorial of %d is %d",a,fact);
    return 0;

}