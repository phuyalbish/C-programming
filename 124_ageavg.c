//Average of age.

#include<stdio.h>
void main(){
	int age1,age2,age3,avg;
	printf("Enter the age of three people:\n");
	scanf("%d%d%d",&age1,&age2,&age3);
	if(age1>100 || age2>100 || age3>100){
		printf("Inappropriate age.");
	}
	else{
		avg = (age1+age2+age3)/3;
		printf("The average age of all three is %d",avg);
	}
}
