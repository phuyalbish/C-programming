//Write a program in C to store elements in an array and print it.

#include<stdio.h>
void main(){
    int array[5],i,n;
    printf("Enter 5 numbers in an array:");
    for(i=0; i<5; i++){
        scanf("%d",&array[i]);
    }

    printf("The elements are:");
    for(i=0; i<5; i++){
            printf("\n%d",array[i]);
        }

}