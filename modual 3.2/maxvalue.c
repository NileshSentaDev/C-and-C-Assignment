// find out the max of given number
#include<stdio.h>
void main(){
    int number,max;
    for (int i = 1; i <= 5; i++)
    {
       printf("Enter the five number: ");
       scanf("%d",&number);

       if (number>max)
       {
        max=number;
       }
       
    }
    printf("\n maximum value is: %d",max);
}