
#include<stdio.h>

void main(){

    int i=65;
    while(i<70){
        int j=65;
        while(j<=i){
            printf("%c",i);
                j++;
        }
        printf("\n");
        i++;

    }
}