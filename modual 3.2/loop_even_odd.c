//input 10 number 
//even number and odd number
//sum of even number
//sum of odd number
#include<stdio.h>
void main(){
    int num,count_even=0,sum_even=0,count_odd=0,sum_odd=0;

    for (int i = 1; i <= 10; i++)
    {
        printf("\nEnetr a number:");
        scanf("%d",&num);

        if (num%2==0)
        {
            printf("Even number");
            count_even++;
            sum_even=sum_even+num;
        }
        else
        {
            printf("Odd number");
            count_odd++;
            sum_odd=sum_odd+num;
        }
        
    }
    printf("\ncount of even number:%d",count_even);
    printf("\ncount of odd number:%d",count_odd);
    printf("\nsum of even number:%d",sum_even);
    printf("\nsum of odd number:%d",sum_odd);
}