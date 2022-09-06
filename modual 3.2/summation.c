// summision of given number
#include<stdio.h>
int main(){
    int x,sum = 0,y;
    
    printf("Enter the intiger number : ");
    scanf("%d",&x);

    while ( x > 0)
    {
        y=x%10;
        sum=sum+y;
        x = x/10;
    }
    printf("%d\n",sum);
    return 0;
}