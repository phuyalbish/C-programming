#include<stdio.h>

void main(){

    int i=5;
    while(i>=1){
        int j=1;
        while(j<=i){
            printf("%d",i);
                j++;
        }
        printf("\n");
        i--;

    }
}