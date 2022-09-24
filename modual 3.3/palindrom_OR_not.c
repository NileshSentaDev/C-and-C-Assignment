// WAP to reverse a string and check that the string is palindrome or 
#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    int val;

    printf("Enter a string :");
    scanf("%s",&a);

    strcpy(b,a);

    strrev(b);

    val = strcmp(a,b);

    if (val==0)
    {
        printf("String is palindrom");
    }
    else
    printf("String is not palindrom");
    
}