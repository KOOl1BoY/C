// program to make right angled triangle star pattern
#include<stdio.h>
int main()
{   
    int a;
    printf("how many layer should be in ur Triangle:");  // consider it as matrix as ixj
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}