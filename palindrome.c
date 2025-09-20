// program to make a number palindrome or not
#include<stdio.h>
int main()
{
 int a,o,rem,rev;  
 printf("enter a number:");
 scanf("%d",&a);
 rev=0;
 o=a;
 while(a!=0)
 {
     rem=a%10;
     rev=rev*10+rem;
     a=a/10;
 }
    if(o==rev)
        printf("the number is palindrome");
    else
        printf("the number is not palindrome");
 return 0;
  
}
