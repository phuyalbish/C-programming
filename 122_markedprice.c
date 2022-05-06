//Marked price.

#include<stdio.h>

void main(){
	float mprice,aprice;
	printf("Enter the Marked price:");
	scanf("%f",&mprice);
	aprice = mprice - (0.03*mprice);
	printf("The actual price after 30% discount is %.2f",aprice);
}
