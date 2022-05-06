//WAP to read 3numbers and print the largest number using function with argument and return type

#include<stdio.h>

int largest(int,int,int);
void main(){
    int n1,n2,n3;
    printf("Enter three number:");
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("The largest is %d",largest(n1,n2,n3));
}

int largest(int x,int y,int z){

    if(x>y) {
        if(x>z) return x;
        else return z;
    }
    else{

        if(y>z) return y;
        else return z;
    }
}