// A AB ABC ABCD
#include<stdio.h>
void main(){
    int ch='A';

    for (int row = 1; row <= 5; row++)
    {
        for (int colum = 1; colum <= row; colum++)
        {
            printf("%c ",(ch+colum-1));
        }
        printf("\n");
    }
    
}