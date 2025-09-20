// C program to print a pyramid of stars
#include<stdio.h>
int main()
{
    int a;
    
    printf("how many layer should be in ur Triangle:");  // consider it as matrix as ixj
    scanf("%d",&a);
    for(int i=1;i<=a;i++)       // i refers to number of rows in a matrix
    {
       for(int j=1;j<=a-i;j++)      //j refers to number of collum
       {
           printf(" ");
       }
       for(int j=1;j<=2*i-1;j++)
       {
           printf("*");
       }
         printf("\n");
    }
    return 0;
}