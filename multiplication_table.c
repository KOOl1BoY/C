//program to print multiplication table of a number using while loop
#include<stdio.h>
int main()
{
  int a,i=1;
  printf("enter the number whose multiplication table you want:");
  scanf("%d",&a);
  while(i<=10)
  {
    printf("%d x %d =%d\n",a,i,a*i);
    i++;
  }
    return 0;

}