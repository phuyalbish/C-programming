

//WAP  that  calls  a  function  named  interest().  
//This  function  takes  the  values  of  principal,number of years and rate of interest as an argument & returns the calculated interest.

#include<stdio.h>

float intrest(int,int,float);
 
void main(){



        int princ,years;
        float rate, intres;

        printf("Enter the Principal:");
        scanf("%d",&princ);
        printf("Enter the years:");
        scanf("%d",&years);
        printf("Enter the rate:");
        scanf("%f",&rate);
        printf("The intrest is: %.2f",intrest(princ,years,rate));
    
}

float intrest(int p, int t, float r){

        return (p*t*r)/100;

}