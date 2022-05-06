//WAP to input the number and find the sum of each digits.
#include<stdio.h>

void main(){
	int num,i,d,sum=0;
	scanf("%d",&num);
	while(num>0)
    {
		d = num%10;
		sum = sum + d;
		num = num/10;
	}
	printf("\nThe sum is:%d",sum);
}
