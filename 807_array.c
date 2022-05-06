//Write a program that can declare a 1-Dimensional called height [20], 
//accept its content using pointer and find the largest among them using pointer.

#include<stdio.h>
void main(){


    int A[5],i,*max;
    printf("Enter 5 numbers:");
    for(i=0; i<5; i++){
        scanf("%d",(A+i));
    }

  max = A;
 
  for (i = 1; i < 5; i++)
  {
    if (*(A+i) > *max)
    {
       *max = *(A+i);
    }
  }
  printf("%d is the maximum number.",*max);
}