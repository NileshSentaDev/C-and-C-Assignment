// print fibonicc siries in given number ...
#include<stdio.h>
void main(){
    int a=0,b=1,fib;
    printf("%d%d",a,b);

    for (int i = 1; i <= 10; i++)
    {
        fib=a+b;
        a=b;
        b=fib;
        printf("\n %d",fib);
    }
    
}