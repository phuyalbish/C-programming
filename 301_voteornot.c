//Write a program to determine whether a person is eligible to vote.

#include<stdio.h>
void main(){
    int age;
    printf("Enter a age of a voter:");
    scanf("%d",&age);

    if(age>=18){

        printf("The person is eligible for vote.");
    }
    else{
        printf("The person is not eligible for vote");
    
    }
}