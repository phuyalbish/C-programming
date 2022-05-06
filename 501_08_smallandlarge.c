//WAP to find the smallest and the largest element in the array of size 10.

#include<stdio.h>
void main(){
    int array[10]= {21,2,3,4,7,0,24,1,8,10},i,j,swap;


    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){
            if(array[i]>array[j]){
            swap = array[i];
            array[i] = array[j];
            array[j] = swap;

            }
       }
    }

       printf("The Smallest is %d\n",array[0]);
       printf("The Largest is %d",array[9]);
}