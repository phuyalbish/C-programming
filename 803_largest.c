//Write a program to find the largest number among three numbers using pointer

#include<stdio.h>
void main(){
    int n1,n2,n3,*d,*l;
    printf("Enter two numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    if(n1 >= n2){
        d = &n1;
    }
    else{
        d = &n2;
    }
    if(*d >= n3){
        *l = *d;
    }
    else{
       l = &n3;
    }
    printf("%d is the largest number.",*l);
}