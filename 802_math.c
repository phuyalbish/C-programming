//Write a program that can accept the content of two numbers and
//perform them addition, subtraction and multiplication between them using pointer only.


#include<stdio.h>
void main(){
    int *a,*b,c,n1,n2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    a = &n1;
    b = &n2;
    c = *a+*b;
    printf("Addition: %d",c);
    c = *a-*b;
    printf("Subtraction: %d",c);
    c = *a*(*b);
    printf("Multiplication: %d",c);
}