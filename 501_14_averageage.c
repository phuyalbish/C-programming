//WAP to read “n” number of person’s age in an array and print minimum, maximum and average age
#include<stdio.h>
void main(){
    int n,i,j,swap,avg=0;
    printf("Enter how many?");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d numbers:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(array[i]>array[j]){
            swap = array[i];
            array[i] = array[j];
            array[j] = swap;
            }
       }
       avg = avg+array[i];
    }

       printf("\nThe Minimum age is %d",array[0]);
       printf("\nThe Maximum age is %d",array[n-1]);
       printf("\nThe Average age is %d",avg);
}