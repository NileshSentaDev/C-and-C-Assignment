// print factorail of given number...
#include<stdio.h>
void main(){
    int num,fact=1;


    printf("Enter the number: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        fact=fact*1;
    }
    printf("factorial number : %d",fact);


}