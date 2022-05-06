//WAP to add first seven terms of the following series using for loop.
//1/1! + 2/2! + 3/3! + ... + n/n!

#include<stdio.h>
void main(){
    int i,fact=1;
    float j;
    float ser;
    for(j=1; j<=7; j++){

    for(i=1; i<=j; i++){
        fact = fact*i;
        i++;
    }
    ser = j/fact;
    printf("\n%.0f = %f",j,ser);

    }
    } 