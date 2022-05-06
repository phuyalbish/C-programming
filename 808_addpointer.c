// //Write a program that can accept the content of 
// two 1-Dimensional arrays called A and B of size 10 
// using pointer. Perform C=A+B using pointer only,
//  now display the content of C array but using pointer.


#include<stdio.h>
void main(){


    int A[10],B[10],C[10],i,store;
    printf("Enter 10 numbers for A:");
    for(i=0; i<10; i++){
        scanf("%d",(A+i));
    }
    printf("Enter 10 numbers for B:");
    for(i=0; i<10; i++){
        scanf("%d",(B+i));
    }
    for(i=0; i<10; i++){
        store = *(A+i) + *(B+i);
        *(C+i) = store;
    }
    for(i=0; i<10; i++){
        printf("%d\t",*(C+i));
    }
}