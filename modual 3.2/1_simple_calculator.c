//simple calculator
#include<stdio.h>
void main(){
    int add,sub,mul,div,mod,a,b;

    printf("Enter the first number = ");
    scanf("%d",&a);

    printf("Enter the second number = ");
    scanf("%d",&b);

    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    printf("\n The addition of two number is %d",add);
    printf("\n The substraction of two number is %d",sub);
    printf("\n The multiplication of two number is %d",mul);
    printf("\n The modulu of two number is %d",mod);
}