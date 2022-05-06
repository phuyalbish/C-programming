//WAP to print Hello 10 times using all loop.
#include<stdio.h>
void main(){
    int i,j=1,k=1;

    printf("\n\nUsing For Loop");
    for(i=1; i<=10; i++){
            printf("\nHello, World");
    }
    printf("\n\nUsing While Loop");
    while(j<=10){
            printf("\nHello, World");
            j++;
    }

    printf("\n\nUsing do While Loop");
    do{
    
            printf("\nHello, World");
            k++;
    }while(k<=10);
}