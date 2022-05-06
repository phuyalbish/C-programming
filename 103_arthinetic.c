// Aithematic calculations.

#include<stdio.h>

void main()
{
	int num1, num2;
	printf("Give First Number:");
	scanf("%d",&num1);
	printf("\nGive Second Number:");
	scanf("%d",&num2);
	printf("\n%d + %d = %d",num1,num2,(num1+num2));	//Addition
	printf("\n%d - %d = %d",num1,num2,(num1-num2));	//Subtraction
	printf("\n%d * %d = %d",num1,num2,(num1*num2));	//Multiplication
	printf("\n%d / %d = %d",num1,num2,(num1/num2));	//Division
	printf("\n%d %% %d = %d",num1,num2,(num1%num2));	//Remainder.
	getch();
}
