#include<stdio.h>
void main(){

    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}},i,j,add=0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++) {
            add += array[i][j];
        }
    }
    printf("The addition is %d",add);
}