//Write a program that can perform C=A+B where A,B and C are 1-Dimensional
//  array of size 10, using user defined function called
//  add with following prototype: void add(int *at,int *bt,int *ct);


#include<stdio.h>
void add(int *,int *,int *);
void main(){


    int A[10],B[10],C[10],i;
    printf("Enter 10 numbers for A:");
    for(i=0; i<10; i++){
        scanf("%d",(A+i));
    }
    printf("Enter 10 numbers for B:");
    for(i=0; i<10; i++){
        scanf("%d",(B+i));
    }
    add(A,B,C);
    for(i=0; i<10; i++){
        printf("%d\t",*(C+i));
    }
}


void add(int *at,int *bt,int *ct){
    int i,store;
    for(i=0; i<10; i++){
        store = *(at+i) + *(bt+i);
        *(ct+i) = store;
    }

}