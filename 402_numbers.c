//WAP to print numbers from 1 to 10 using all the three loops.

#include<stdio.h>
void main(){
    int i,j=1,k=1;

    printf("\n\nUsing For Loop");
    for(i=1; i<=10; i++){
            printf("\n%d",i);
    }
    printf("\n\nUsing While Loop");
    while(j<=10){
            printf("\n%d",j);
            j++;
    }

    printf("\n\nUsing do While Loop");
    do{
    
            printf("\n%d",k);
            k++;
    }while(k<=10);
}