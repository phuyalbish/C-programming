// Tax in the system.
#include<stdio.h>
void main(){
	int amount, taxed;
	printf("Enter your amount:");
	scanf("%d",&amount);
	taxed = amount + ((amount/100) * 5);
	printf("The amount after tax of %d is %d.",amount,taxed);
	getch();
}
