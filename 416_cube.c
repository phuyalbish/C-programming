//WAP to accept any number ‘n’ & print the cube of all numbers from 1 to n, which is exactly divisible by 3.

#include<stdio.h>
void main(){

    int i,n,cube;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){

        if(i%3==0){
            printf("\n%d's cube is %d",i,i*i*i);
        }
    }
}