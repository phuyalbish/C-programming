// WAP to read two 2-D Array, multiply them and print the result.

#include<stdio.h>
void main(){
    int ia,ib,ja,jb;
    printf("Enter The number of row and column in matrix A:");
    scanf("%d",&ia);
    scanf("%d",&ja);
    printf("Enter The number of row and column in matrix B:");
    scanf("%d",&ib);
    scanf("%d",&jb);
    int i,j,k;
    int a[ia][ja];
    int b[ib][jb];
    int c[ia][jb];

    if(ja != ib){
        printf("These array cant be multiplied.");
    }


    else{


    printf("Enter the values for array A:\n");

    for(i=0; i<ia; i++){
        for(j=0; j<ja; j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the values for array B:\n");

    for(i=0; i<ib; i++){
        for(j=0; j<jb; j++){
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
        for(i=0; i<ia; i++){
            for(j=0; j<jb; j++){
                    c[i][j] = 0;
                    for(k=0; k<ja; k++){
                        c[i][j] += a[i][k]*b[k][j];
                    }
            }
        }
    

printf("\nThe A*B matrix C :\n");
    for(i=0; i<ia; i++){
            for(j=0; j<jb; j++){
                printf("%d \t",c[i][j]);
            }
        printf("\n");
    }
}
}