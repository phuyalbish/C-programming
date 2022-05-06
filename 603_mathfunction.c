//WAP  that  reads  two  numbers  from  user  and  call  function  
//add()  for  addition, 
//subtract() for subtraction,
//product() for multiplication and 
//division() for division.

#include<stdio.h>

void add(int,int);
void subtract(int,int);
void product(int,int);
void division(int,int);

void main(){

    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);

    add(a,b);
    subtract(a,b);
    product(a,b);
    division(a,b);
}
void add(int x, int y){
        printf("\nThe addition of %d and %d is %d",x,y,x+y);
}
void subtract(int x, int y){
        printf("\nThe subtraction of %d from %d is %d",y,x,x-y);
}
void product(int x, int y){
        printf("\nThe product of %d and %d is %d",x,y,x*y);
}
void division(int x, int y){
        printf("\nThe addition of %d to %d is %d",y,x,x/y);
}