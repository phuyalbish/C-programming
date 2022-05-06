#include<stdio.h>

void main(){

    int i=1;
    while(i<=5){

        int j=1;
        
        while(j<=i){

           

            if(j%2 == 1){
            printf("%d \t",1);

            }
            else{

            printf("%d \t",0);
            }
            j++;
        }
        i++;
        printf("\n");

    }
}