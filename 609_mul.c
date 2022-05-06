
//WAP  that  calls  a  function  whose  name  is  mul().
//that  takes  one  argument  and  print  the multiplication table of inputted number.

#include<stdio.h>
 
 void mul(int);

 void main(){

    int j;
    printf("Enter a number for its Multiplication Table:");
    scanf("%d",&j);
    mul(j);
     
 }
 void mul(int j){
     int i;
     for(i=1; i<=10; i++){
            printf("\n %d * %d = %d",j,i,j*i);
        }
 }