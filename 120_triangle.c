 // area of Triangle by sides.
 

#include<stdio.h>
#include<math.h>
void main(){
	
	float side1,side2,side3,side,area;
	printf("Enter the length of the first side of the Triangle:");
	scanf("%f",&side1);
	printf("Enter the length of the second side of the Triangle:");
	scanf("%f",&side2);
	printf("Enter the length of the third side of the Triangle:");
	scanf("%f",&side3);
	side = (side1+side2+side3)/2;
	area = sqrt(side*(side-side1)*(side-side2)*(side-side3));
	
	printf("\nThe area of the triangle is: %.3f",area);
}
