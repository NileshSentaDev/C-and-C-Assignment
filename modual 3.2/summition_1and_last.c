#include<stdio.h>
void main(){
    char op;
    int x,y,result;

    printf("Enter the operater (+,-,*,/):");
    scanf("%c",&op);

    printf("Enter the two number x and y \n");
    scanf("%d %d",&x,&y);

    switch (op)
    {
    case '+':
        result=x+y;
        break;

    case '-':
        result=x-y;
        break;

    case '*':
        result=x*y;
        break;

    case '/':
        result=x/y;
        break;
    
    
    }
    printf("result = %d",result);
}