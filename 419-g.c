#include<stdio.h>

void main(){

    int i=69;
    while(i>=65){
        int j=65;
        while(j<=i){
            printf("%c",j);
                j++;
        }
        printf("\n");
        i--;

    }
}