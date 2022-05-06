//Temperature.

#include<stdio.h>

void main(){
	float f,c;
	printf("Enter the temperature in centigrade:\n");
	scanf("%f",&c);
	
	f = (c*1.8)+32;
	printf("%.0f deg centigrade is %.2f deg fahrenheit.",c,f);
	getch();
}
