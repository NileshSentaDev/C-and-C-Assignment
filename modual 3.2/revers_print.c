// number in revers print
//ex 34567 ans =76543
#include<stdio.h>
void main(){
    int a=45790,b;

    while (a!=0)
    {
        b=a%10;
        a=a/10;

        printf("%d",b);
    }
    
}