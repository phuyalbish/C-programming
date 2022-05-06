// Sum of the digits of three digit number.

#include<stdio.h>

void main(){
	int num,d,sum=0;
	printf("Enter Three digit number:");
	scanf("%d",&num);

		d = num%10;
		sum = sum + d;
		num = num/10;

		d = num%10;
		sum = sum + d;
		num = num/10;
		
		sum = sum + num;
		
	printf("\nThe sum is:%d",sum);
	
}
