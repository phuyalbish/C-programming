//WAP to take two numbers from user and one arithmetic operator (+,-,*,/,%) and perform the corresponding operation of those two numbers by using switch case.

#include<stdio.h>
void main(){
    char choose;
    int res,n1,n2;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("Choose one: +\t-\t*\t/\t%%\n");
    scanf(" %c",&choose);

    switch(choose){
        case '+':
            res = n1+n2;
            break;
        case '-':
            res = (n1*n1)+(n2*n2);
            break;
        case '*':
            res = (n1*n1*n1)+(n2*n2*n2);
            break;
        case '/':
            res = n1/n2;
            break; 
            case '%':
            res = n1%n2;
            break;
        default:
            printf("\nInvalid choice :choose + - * / %");

    }
    printf("\nThe result is %d",res);
}