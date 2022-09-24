// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array  
#include<stdio.h>
void sum(int [3][3],int[3][3]);
void sub(int [3][3],int[3][3]);
void main(){
    int a[3][3]={{4,4,4},{4,4,4},{4,4,4}};
    int b[3][3]={{2,2,2},{2,2,2},{2,2,2}};
   
    sum(a,b);
    sub(a,b);
    
}
void sum(int a[3][3],int b[3][3]){
int c[3][3];
printf("\nAddition........\n");
for (int i = 0; i < 3; i++)
{
   for (int j = 0; j < 3; j++)
   {
    c[i][j] = a[i][j] + b[i][j];
    printf("%d ",c[i][j]);
   }
   printf("\n");
}

}
void sub(int a[3][3],int b[3][3]){
int c[3][3];
printf("\nSubtraction........\n");
for (int i = 0; i < 3; i++)
{
   for (int j = 0; j < 3; j++)
   {
    c[i][j] = a[i][j] - b[i][j];
    printf("%d ",c[i][j]);
   }
   printf("\n");
}

}