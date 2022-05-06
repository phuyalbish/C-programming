//WAP to calculate electricity bill.

#include<stdio.h>

void main(){
    int unit,charge;
    printf("Enter the unit:");
    scanf("%d",&unit);

    if(unit>=0 && unit<=150){
        charge = 0 + unit*3;
        printf("The electricity bill is %d",charge);
    }
    else if(unit>150 && unit<=350){
        charge = 100  + ((unit-150)*3.75);
        printf("The electricity bill is %d",charge);
    }  
    else if(unit>350 && unit<=450){
        charge = 250 + ((unit-350)*4);
        printf("The electricity bill is %d",charge);
    }
     else if(unit>450){
       charge = 300  + ((unit-400)*4.25);
        printf("The electricity bill is %d",charge);
    }
    else{
        printf("Invalid input");
    }
    
}