
//WAP to read a number ‘n’ & calculate its cube using function:
//a.No argument but return type
//b.Argument and return type

#include<stdio.h>

int cube(int);
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The cube of %d is %d",n,cube(n));

}

int cube(int x){
    return x*x*x;
}