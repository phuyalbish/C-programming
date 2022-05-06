//WAP to find the second largest element in the array.

#include<stdio.h>
void main(){
    int array[10]= {21,2,3,4,7,0,24,1,8,10},i,j,swap;


    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){
            if(array[i]<array[j]){
            swap = array[i];
            array[i] = array[j];
            array[j] = swap;

            }
       }
    }

       printf("The Second Largest is %d\n",array[1]);
}