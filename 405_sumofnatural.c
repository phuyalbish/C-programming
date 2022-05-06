//WAP that asks an integer number n and calculate sum of all natural numbers from 1 to n using  available loops.

#include<stdio.h>
void main(){
        int j,i,add=0;
        printf("Enter a number: ");
        scanf("%d",&i);
        for(j=1; j<=i; j++){
            add = add+j;
        }
        printf("\nThe addition of all natural number upto %d is %d",i,add);
}