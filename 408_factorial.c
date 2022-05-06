//WAP that reads a number from user & calculate the factorial of that number.
#include<stdio.h>
void main(){
    int i=1,n,fact=1;
    printf("Enter a number for its factorial:");
    scanf("%d",&n);
    while(i<=n){
        fact = fact*i;
        i++;
    }
    printf("\nThe factorial of %d is %d",n,fact);
    }