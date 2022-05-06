//WAP to calculate: Sum, Difference, Multiplication, Division of two numbers by reading the user’s choice.



#include<stdio.h>
void main(){


int num1,num2,sel;
printf("Enter two number for its calculations:");
scanf("%d%d",&num1,&num2);

printf("Select what to do:\n1 for Sum\n2 for Difference\n3 for Multiplication\n4 for Division");
scanf("%d",&sel);


//using if-else-if ladder.
printf("\n\nUsing If-else-if ladder.\n");
if(sel == 1)        printf("%d + %d = %d",num1,num2,num1+num2);
else if(sel == 2)  printf("%d - %d = %d",num1,num2,num1-num2);
else if(sel == 3)  printf("%d * %d = %d",num1,num2,num1*num2);
else if(sel == 4)  printf("%d / %d = %d",num1,num2,num1/num2);
else printf("Invalid selection.");

//using if-else-if ladder.
printf("\n\nUsing Switch Case\n");
switch(sel){
    case 1:
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    case 2:
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
    case 3:
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;
    case 4:
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;
    default:
        printf("Invalid selection.");
    
}

}