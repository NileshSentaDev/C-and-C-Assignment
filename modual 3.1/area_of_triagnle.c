#include<stdio.h>
void main()
{
    float b,h,area;

    printf("Enter the value of hight : ");
    scanf("%f",&h);

    printf("Enter the value of base : ");
    scanf("%f",&b);

    area = (h*b)/2;

    printf("Area of triangle is : %f",area);

}