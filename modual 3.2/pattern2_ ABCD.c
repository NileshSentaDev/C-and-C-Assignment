// print A BC DEF GHIJ KLMNO 
#include<stdio.h>
void main(){

    int ch = 'A';

    for ( int row = 1; row <= 5; row++)
    {
        for (int colum = 1; colum <= row; colum++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
    
}