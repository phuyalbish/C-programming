
//WAP to read a number ‘n’ & calculate its cube using function:
//a.No argument but return type
//b.Argument and return type

#include<stdio.h>

int cube();
void main(){
    printf("The cube is %d",cube());

}

int cube(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    return n*n*n;
}