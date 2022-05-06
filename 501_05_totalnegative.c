//Write a C program to count total number of negative elements in an array.
#include<stdio.h>
void main(){
    int array[10]= {21,-2,3,4,-7,0,24,-1,8,-10},i,tot=0;
    for(i=0; i<10; i++){
        if(array[i]<0){
            tot++;
        }
    }
    printf("The total negative elements are: %d",tot);
    
    }