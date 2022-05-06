// Price and quantity.

#include<stdio.h>

void main(){
	int quant;
	float price,tprice;
	printf("Enter the number of uantity:");
	scanf("%d",&quant);
	printf("Enter the amount of price you have:");
	scanf("%f",&price);
	tprice = price*quant;
	
	printf("The total price for %d quantity with %.2f amount each is %.2f",quant,price,tprice);
	
}
