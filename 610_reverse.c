

//WAP  that  calls  a  function  whose  name  is reverse()  
//that  takes number  asargument  and returnsthe number in reverse order.

#include<stdio.h>

int reverse(int);

void main(){
    int num;
    printf("Enter non single digit number:");
    scanf("%d",&num);
   printf("The reverse is %d",reverse(num));
}

int reverse(int n){
    int x=0;
    while(n!=0){
        x = (x*10)+(n%10);
        n /=10;
    }
    return x;
}
