// Nrs to Dollar

#include<stdio.h>

void main(){
	float dol,nrs;
	printf("Enter the Dollar value here:\nNrs.");
	scanf("%f",&nrs);
	dol = nrs/73.77;
	printf("The Nepalese Rupee of Nrs%.2f is  $%.2f",nrs,dol);
	getch();
}
