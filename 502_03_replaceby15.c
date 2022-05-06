#include<stdio.h>
void main(){
    int a[3][3] = {{1,4,7},{6,8,5},{10,2,15}};
    int b[3][3],i,j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(a[i][j] < 5){
                b[i][j] = 15;
            }
            else{
                b[i][j] = a[i][j];
            }
        }
    }

    printf("New matrix:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
}