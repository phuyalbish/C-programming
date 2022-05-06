//WAP to read annual salary of an employee and declare the tax & print the actual amount received by the employee using if else if ladder.
//Upto 400000 = 1%
//above 400000 and upto 500000 = 10%
//Above 500000 = 20%

#include<stdio.h>
void main(){
    int sal,tax;
    printf("Enter a salary of a employee:");
    scanf("%d",&sal);

    if(sal<=400000){
        tax = sal*0.01;
        printf("The declared tax for %d salary is %d.\nThe actual amount recieved by the employee is %d",sal,tax,sal-tax);
    }
    else if(sal>400000 && sal<=500000){
        tax = sal*0.1;
        printf("The declared tax for %d salary is %d.\nThe actual amount recieved by the employee is %d",sal,tax,sal-tax);
    }
    else if(sal<0){
        printf("The salary goes less than zero.");
    }
    else{
         tax = sal*0.2;
        printf("The declared tax for %d salary is %d.\nThe actual amount recieved by the employee is %d",sal,tax,sal-tax);
    }
}