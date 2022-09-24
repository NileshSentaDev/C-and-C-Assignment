// WAP to make  multiplication of two matrix using 2-D Array
#include<stdio.h>
void main(){
    int a[2][2]={{2,2},{2,2}};
    int b[2][2]={{4,4},{4,4}};
    int c[2][2],s=0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                s+=a[i][k] * b[k][j];
            }
            c[i][j]=s;
            s=0;
        }
        
    }
   printf("\n Multiplication........\n");
   for (int i = 0; i < 2; i++)
   {
    for (int j = 0; j < 2; j++)
    {
        printf("\t%d",c[i][j]);
    }
    printf("\n");
   }
    

}