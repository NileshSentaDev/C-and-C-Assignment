#include<stdio.h>
void main()
{
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

    printf("\nThe addition of two number is = %d",add);
    printf("\nThe subtraction of two number is = %d",sub);
    printf("\nThe multiplication of two number is = %d",mul);
    printf("\nThe division of two number is = %d",div);
    printf("\nThe modulo of two number is = %d",mod);

}