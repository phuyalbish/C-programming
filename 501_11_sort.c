//WAP to sort the array in ascending and descending order.
//WAP to find the smallest and the largest element in the array of size 10.

#include<stdio.h>
void main(){
    int array[10]= {21,2,3,4,7,0,24,1,8,10},i,j,swap;


       printf("In Decending order:\n");
    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){
            if(array[i]<array[j]){
            swap = array[i];
            array[i] = array[j];
            array[j] = swap;

            }
       }
       printf("\n%d",array[i]);
    }
    printf("\nIn ascending order:\n");
    for(i=9; i>=0; i--){
        printf("\n%d",array[i]);
    }

}