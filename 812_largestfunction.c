//Write a program that can find the largest of number of an array using user defined 
//function called largest with following prototype: int largest(int *);


#include<stdio.h>
int largest(int *);
void main(){


    int A[5],i;
    printf("Enter 5 numbers:");
    for(i=0; i<5; i++){
        scanf("%d",(A+i));
    }

  printf("%d is the maximum number.",largest(A));
}

int largest(int *A){

  int * max = A,i;
 
  for (i = 1; i < 5; i++)
  {
    if (*(A+i) > *max)
    {
       *max = *(A+i);
    }
  }
  return *max;
}