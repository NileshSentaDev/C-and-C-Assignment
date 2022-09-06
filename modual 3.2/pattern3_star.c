// print star piramids
#include<stdio.h>
void main(){
    
    for (int row = 1; row <= 9; row+=2)
    {
        for (int space = 9; space >= row; space--)
        {
            printf(" ");
        }
        
        for (int colum = 1; colum <= row; colum++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
