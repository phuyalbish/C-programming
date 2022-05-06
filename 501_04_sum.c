//Write a program in C to find the sum of all elements of the array
#include<stdio.h>
void main(){
    int array[10]= {21,2,3,4,7,0,24,1,8,10},i,sum=0;
    for(i=0; i<10; i++){
        sum += array[i];
    }
        printf("The sum is %d",sum);
    }