// gram and kilogram

#include<stdio.h>

void main(){
	int gram,kg,left;
	printf("Enter the number of gram:\n");
	scanf("%d",&gram);

	
		kg = gram/1000;
			left = gram - (kg*1000);
			printf("The weight is %dkg and %dg.",kg,left);
		
	getch();
}
