//WAP to test whether a number entered is positive, negative or equal to zero.

#include<stdio.h>
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0){
        printf("%d is negative.",num);
    }
    else if(num==0){
        printf("%d is equal to zero.",num);
    }
    else{
        printf("%d is positive.",num);
    }
    }