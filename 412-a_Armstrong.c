//WAP to read a number & find whether it is:
//a Armstrong or not.


#include<stdio.h>

void main(){
	int n,num,i,d,sum=0;
    printf("Enter a number:");
	scanf("%d",&n);
    num = n;
	while(num>0)
    {
		d = num%10;
		sum = sum + (d*d*d);
		num = num/10;
	}
    if(n == sum){
        printf("%d is Armstrong Number.",n);
    }
    else {
        printf("%d is not Armstrong Number.",n);
    }
    
}
