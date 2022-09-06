//table of the given number
#include<stdio.h>
void main(){

    int num;
     
    printf("Enetr a number: ");
    scanf("%d",&num);

    printf("\nTable %d ",num);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d",num,i,(num*i));
    }
    
}