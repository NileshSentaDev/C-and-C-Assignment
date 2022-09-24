// WAP to find factorial using recursion  
#include<stdio.h>
int fact(int n){
    if (n==0)
    {
        return 1; 
    }
    else
    return(n*fact(n-1));
    
}
void main(){
    int no;
    printf("Enter a value :");
    scanf("%d",&no);
    printf("factorial : %d",fact(no));
}