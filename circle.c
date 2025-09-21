//program to calulate area and perimeter of circle
#include<stdio.h>
#define pi 3.14
int main()
{
    float r,area,perimeter;
    printf("enter the radius of circle:");
    scanf("%f",&r);
    area=pi*r*r;
    perimeter=2*pi*r;
    printf("the area of circle is:%f\n",area);
    printf("the perimeter of circle is:%f",perimeter);
    return 0;
}