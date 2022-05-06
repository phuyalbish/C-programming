//Write a program to display the sum and average of numbers from 1 to n

#include<stdio.h>

void main(){

    int i,n,avg,sum;
    printf("Enter how much:\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        sum += i;
    }
    printf("%d is sum.",sum);
    printf("%d is average.",avg/n);
}