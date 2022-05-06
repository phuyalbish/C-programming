// Tax
#include<stdio.h>

void main(){
	float salary,aftertax,netsal;
	printf("Enter the amount of salary you got before Tax.");
	scanf("%f",&salary);
	aftertax = salary - (0.02*salary);
	printf("Salary after tax is %.2f",aftertax);
	netsal = aftertax + (0.04+aftertax);
	printf("\nNet salary after allowence is %.2f",netsal);
}

