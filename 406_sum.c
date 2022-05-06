//Sum and Average of nth number.

//WAP to add two numbers and display their sum. The program must ask next two numbers and add till user wants.
#include<stdio.h>
void main(){

    char c;
    int num1,num2;
    do{
        printf("Enter Two number:");
        scanf("%d%d",&num1,&num2);
        printf("%d + %d = %d",num1,num2,num1+num2);
        printf("\n Do you want to continue? Type 'y' ");
        scanf(" %c",&c);
    }while(c=='y');

}