//WAP to find Fibonacci series upto 10 th terms.

#include<stdio.h>
void main(){

    int i,num1=1,num2=0,fib=0;
    printf("The fibonacci series upto 10th term are:\n%d",num1);
    for(i=1; i<10; i++){

        fib = num1+num2;
        num2 = num1;
        num1 = fib;

        printf("\n%d",fib);
    }
}