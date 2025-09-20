// program to make a number palindrome or not
#include<stdio.h>
int main()
{
 int a,rem,rev;  
 printf("enter a number:");
 scanf("%d",&a);
 rev=0;
 
 while(a!=0)
 {
     rem=a%10;
     rev=rev*10+rem;
     a=a/10;
 }
 printf("the reverse of the number is:%d",rev);
    return 0;
  
}
