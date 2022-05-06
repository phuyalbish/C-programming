
//WAP that use a function called Armstrong(). 
//This function takes a number as a input and check whether it is Armstrong or not.
#include<stdio.h>
void armstrong(int);

void main(){

    int n;

    printf("Enter a number:");
	scanf("%d",&n);
    armstrong(n);
}

void armstrong(int n){
    int num,i,d,sum=0;
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
    