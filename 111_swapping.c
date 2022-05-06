//Swapping.
#include<stdio.h>

void main(){
	int A,B,swap;
	printf("Enter number for A:\n");
	scanf("%d",&A);
	printf("Enter number for B:\n");
	scanf("%d",&B);
	printf("Values before swapping:\nA = %d\nB = %d",A,B);
	//Swapping 
	swap = A;
	A = B;
	B = swap;
	
	printf("\nValues after swapping:\nA = %d\nB = %d",A,B);
	getch();
}
