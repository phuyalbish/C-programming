//Write two 3*4 matrix A and B in your program and print them. And obtain matrix C=5*(A-B) and print.

#include<stdio.h>
void main(){

    int A[3][4] = {{5,7,8,9},{4,6,9,8},{7,5,9,7}};
    int B[3][4] = {{1,5,3,5},{4,5,7,6},{3,4,6,6}};
    int i,j,C[3][4];

    printf("THis is Matrix A:\n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++) {
            printf("%d \t",A[i][j]);
        }
        printf("\n");
    }

    printf("THis is Matrix B:\n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++) {
            printf("%d \t",B[i][j]);
        }
        printf("\n");
    }

    printf("THis is Matrix C:\n");
    printf("C = A-B\n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++) {
            C[i][j] = 5*(A[i][j] - B[i][j]);
            printf("%d \t",C[i][j]);
        }
        printf("\n");
    }
}