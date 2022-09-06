#include<stdio.h>
void main()
{
    float p,r,t,si;

    printf("Enter the principle amount = ");
    scanf("%f",&p);

    printf("Enter the rate of the interest = ");
    scanf("%f",&r);

    printf("Enter the time duration = ");
    scanf("%f",&t);

    si=(p*r*t)/100;

    printf("The simple interest is %f",si);
}