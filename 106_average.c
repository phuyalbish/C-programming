//Average of three.
#include<stdio.h>
void main(){
	int num1,num2,num3,avg;
	printf("Enter Three numbers for their average:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	avg = (num1+num2+num3)/3;
	printf("\n Average of %d, %d and %d is: %d",num1,num2,num3,avg);
	getch();
}
