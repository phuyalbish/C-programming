
//The area and circumference of the circle.
#include<stdio.h>
#define Pi 3.14

void main(){
	
	float A,C,r;
	printf("Give the radius of the circle:\n");
	scanf("%f",&r);
	A = Pi*(r*r);
	C = 2*Pi*r;
	printf("\nArea = %.2f\nCircumference = %.2f",A,C);

}
