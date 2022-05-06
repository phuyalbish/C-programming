//Square root.

#include<stdio.h>
#include<math.h>

void main(){
	int num;
	printf("Enter the number for its square root:\n");
	scanf("%d",&num);
	printf("\nThe square root of %d is %.2f",num,sqrt(num));
	getch();
}
