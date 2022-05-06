//Write a C program to print all negative elements in an array.

#include<stdio.h>
void main(){
    int array[10]= {21,-2,3,4,-7,0,24,-1,8,-10},i;
    for(i=0; i<10; i++){
        if(array[i]<0){
            printf("%d\n",array[i]);
        }
    }
    
    }