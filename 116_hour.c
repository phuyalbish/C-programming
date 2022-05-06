// Hour to minute and minute to second.

#include<stdio.h>

void main(){
	int h;
	printf("Enter the number of hour to convert it into minute and second:");
	scanf("%d",&h);
	printf("%d hour is %d minute or %d second.",h,(h*60),(h*3600));
	getch();
}
