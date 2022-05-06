// WAP to read a number and display the multiplication table of that number

#include<stdio.h>
void main(){
        int i,j;
        printf("Enter a number for its Multiplication Table:");
        scanf("%d",&j);
        for(i=1; i<=10; i++){
            printf("\n %d * %d = %d",j,i,j*i);
        }
}