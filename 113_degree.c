//degree.

#include<stdio.h>
#include<math.h>
#define pie 3.1415

void main(){
	
	float num,deg;
	printf("Enter the number to get its degree:");
	scanf("%f",&num);
	deg = num*(pie/180);
	printf("\nThe degree of %.0f is %.3f",num,deg);
	printf("\nThe sin value of %.3f is %f",deg,sin(deg));
	printf("\nThe cos value of %.3f is %f",deg,cos(deg));
	printf("\nThe tan value of %.3f is %f",deg,tan(deg));
	
}
