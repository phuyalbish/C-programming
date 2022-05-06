//Triangle

#include<stdio.h>

void main(){
	
	float base,height,area;
	printf("Enter the Base of the Triangle:");
	scanf("%f",&base);
	printf("Enter the Height of the Triangle:");
	scanf("%f",&height);
	area = (base*height)/2;
	printf("\nThe area is %.2f",area);
	
}
