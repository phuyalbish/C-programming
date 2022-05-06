//WAP  that  calls  a  function  whose  name  is palindrome()
//that  takes number  asargument and check whether it is palindrome or not.


#include<stdio.h>

void palindrome(int);

void main(){
    int n;
    printf("Enter a number:");
	scanf("%d",&n);
    palindrome(n);
}

void palindrome(int n){

  int num,i,d,sum=0;
    
    num = n;
	while(num>0)
    {
		d = num%10;
		sum = sum*10 + d;
		num = num/10;
	}
    if(n == sum){
        printf("%d is a Palindrome Number.",n);
    }
    else {
        printf("%d is not a Palindrome Number.",n);
    }
    
}
