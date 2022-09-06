//even or odd number using ternary oparator
#include<stdio.h>
void main(){
    int num;

    printf("Enter the number =");
    scanf("%d",&num);

    num%2==0?printf("%d is odd number",num):printf("%d is even number",num);
}