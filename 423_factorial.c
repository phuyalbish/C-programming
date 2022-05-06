//WAP to calculate the factorial of given number by using ‘goto’ statement.

#include<stdio.h>
void main(){

    int num,i=1,fact=1;
    printf("Enter a number:");
    scanf("%d",&num);

    here:
         fact = fact*i;
        i++;

    if(i != num+1){
        goto here;
    }
        printf("%d is the factorial.",fact);
}