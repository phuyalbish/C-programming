//Write a program in C to copy the elements of one array into another array
#include<stdio.h>
void main(){
    int array[10]= {21,2,3,4,7,0,24,1,8,10},i,sum=0,copy[10];
    for(i=0; i<10; i++){
        copy[i] = array[i];

        printf("\n %d",copy[i]);
    }
    }