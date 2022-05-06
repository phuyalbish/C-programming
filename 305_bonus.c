//A company decides to give bonus to all its employees on the occasion of Dashain. 
//A 5% bonus on salary is given to male workers and 10% bonus is given to the female workers. 
//WAP to enter the salary and gender of the employee. 
//If the salary is less than 10000 then the employee gets an extra 2% bonus on salary. 
//Calculate the bonus that has to be given to the employee and display the salary that the employee will get.

#include<stdio.h>

void main(){

    int sal,bonus,bn=0;
    char c;

    printf("Enter m for male f for female:");
    scanf("%c",&c);

    
    if(c =='m'){
    printf("Enter the salary of the Male:");
    scanf("%d",&sal);

    if(sal<10000){
        bn = sal*0.02;
    }

        bonus = sal + (sal*0.05);
        printf("The salary is %d", bonus+bn);
    }
    else if(c == 'f'){

    printf("Enter the salary of the Female:");
    scanf("%d",&sal);

    if(sal<10000){
        bn = sal*0.02;
    }

        bonus = sal + (sal*0.1);
        printf("The salary is %d", bonus+bn);
    }
    else{
        printf("Invalid choice! choose m or f");
    }
}