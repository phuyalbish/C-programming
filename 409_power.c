//WAP to read two numbers and calculate its power. (x^y)
#include<stdio.h>
void main(){
    int b,p;
    int i=1,result=1;
    printf("Enter two number for the power to each:");
    scanf("%d%d",&b,&p);
    
    while(i<=p){
    result *= b;
    i++;
    }
    printf("%d^%d = %d",b,p,result);
}