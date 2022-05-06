//Write a program that can accept the content of one 1-Dimensional Array called A
// of size 10 using pointer and display its content using pointer only.

#include<stdio.h>
void main(){
    int A[10],i;
    printf("Enter 10 numbers:");
    for(i=0; i<10; i++){
        scanf("%d",(A+i));
    }
    for(i=0; i<10; i++){
        printf("%d\t",*(A+i));
    }

}