//WAP that use a function called factorial(). 
//This function takes a number as an argument & returns the factorial value of the inputted number

#include<stdio.h>


int factorial(int);

void main(){
       int n;
    printf("Enter a number for its factorial:");
    scanf("%d",&n);
    printf("\nThe factorial of %d is %d",n,factorial(n));
}

int factorial(int n){
    int i=1,fact=1;
    while(i<=n){
        fact = fact*i;
        i++;
    }
    return fact;
}
