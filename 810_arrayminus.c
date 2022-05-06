//Write three 1-Dimensional array called A, B and C of size n.
//Now accept the content of A and B. Perform C=A-B and display the result.



#include<stdio.h>
void main(){


    int A[10],B[10],C[10],i,*max,store;
    printf("Enter 10 numbers for A:");
    for(i=0; i<10; i++){
        scanf("%d",(A+i));
    }
    printf("Enter 10 numbers for B:");
    for(i=0; i<10; i++){
        scanf("%d",(B+i));
    }
    for(i=0; i<10; i++){
        store = *(A+i) - *(B+i);
        *(C+i) = store;
    }
    for(i=0; i<10; i++){
        printf("%d\t",*(C+i));
    }
}