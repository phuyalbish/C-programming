//WAP to read a number & print its square using function.


#include<stdio.h>

int square(int);
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The cube is %d",square(n));

}

int square(int n){

    return n*n;
}