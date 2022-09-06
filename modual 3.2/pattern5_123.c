// 1 23 456....
#include<stdio.h>
void main(){
    int num=1;
    for (int row = 1; row <= 5; row++)
    {
        for (int colum = 1; colum <= row; colum++)
        {
            printf("%d ",num++);
        }
        printf("\n");
    }
      
}