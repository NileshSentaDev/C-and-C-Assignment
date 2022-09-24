// WAP to find reverse of string using recursion  
#include<stdio.h>
void fun(){

    char c;
    scanf("%c",&c);
    if (c!='\n')
    {
        fun();
        printf("%c",c);
    }
    

}
void main(){
    printf("Enter a any sring :");
    fun();
}