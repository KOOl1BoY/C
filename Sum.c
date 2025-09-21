#include<stdio.h>
int main()
{
   printf("tell till wt number u want sum\n");
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum is %d",sum);
    return 0;
}