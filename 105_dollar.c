// Dollar to Nrs.

#include<stdio.h>

void main(){
	float dol,nrs;
	printf("Enter the Dollar value here:\n$");
	scanf("%f",&dol);
	nrs = dol*73.77;
	printf("The Nepalese Rs of $%.2f is Nrs %.2f",dol,nrs);
	getch();
}
