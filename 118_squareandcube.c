//Square and cube of the given number.

#include<stdio.h>

void main(){
	int num;
	printf("Enter a number to find its square and cube:");
	scanf("%d",&num);
	printf("The number %d's\nsquare is %d\ncube is %d",num,(num*num),(num*num*num));
}
