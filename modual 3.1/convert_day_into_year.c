#include<stdio.h>
void main()
{
    int ndays,year;

    printf("Enter the total number of the days = ");
    scanf("%d",&ndays);

    year=ndays/365;

    printf("Year: %d",year);
}