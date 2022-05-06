//Write a program that can swap the contentof two variables using user
// defined function called swap with following prototype: void swap(int *, int *);


#include<stdio.h>
void swap(int *x,int *y){
    int swap;
    swap =*x;
    *x = *y;
    *y = swap; 
}
void main(){
    int n1,n2,*ptr1,*ptr2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    ptr1 = &n1;
    ptr2 = &n2;
    printf("Before swap:\nN1 = %d\nN2 = %d",n1,n2);
    swap(ptr1,ptr2);
    printf("\nAfter swap:\nN1 = %d\nN2 = %d",n1,n2);
}