
//WAP that read a number ānā from user & print your name ānā times using function with no return type and argument.

#include<stdio.h>

void repeatname(int);
void main(){

    int n;
    printf("Enter how many times to repeat your name:");
    scanf("%d",&n);
    repeatname(n);
}

void repeatname(int i){
    int n;
        for(n=0; n<i; n++){
            printf("\nBishal Phuyal");
        }
}