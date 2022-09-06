// 1 10 101 1010 10101
#include<stdio.h>
void main(){
    int i;

    for (int row = 0; row <= 4; row++)
    {
        for (int colum = 0; colum <= row; colum++)
        {
            printf("%d ",i);
            i=!i;
        }
        i=row%2;
        printf("\n");
    }
    
}