/* 
WAP to show difference between Structure and Union. 

Union is a user define data type (very similar to structures).

The difference between structures and union lies in the fact that in structure , 
each member has its own  storage  location.whereas members of a union user a single shared memory location.

The single shared memory location is equal to the size of its largest data member.

*/
#include<stdio.h>
#define n 3
union employer
{
    int empno;
    char b;
}e;

void main(){
    
    e.empno=65;
    printf("\n emp.no : %d",e.empno);
    printf("\n Age : %c",e.b);

    printf("\n Address of all variable :");
    printf("\n emp.no : %d",&e.empno);
    printf("\n Age : %c",&e.b);
}
