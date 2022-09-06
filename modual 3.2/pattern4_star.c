#include<stdio.h>
void main(){

    int num=6;

    for (int row = 1; row <= num; row++)
    {
        for (int colum = 1; colum <= row; colum++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int row = num-1; row >= 1; row--)
    {
        for (int colum = 1; colum <= row; colum++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}