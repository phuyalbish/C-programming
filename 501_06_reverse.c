//Write a program in C to read n number of values in an array and display it in reverse order

#include<stdio.h>
void main(){

    int n,i;
    printf("How many numbers?");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements:",n);
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("\nThe reverse of the array is:");
    for(i=n-1; i>=0; i--){
       printf("\n%d",array[i]);
    }
}