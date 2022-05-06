//WAP  that  calls  a  function  called  getArea().  
//This  function  is responsible  for  reading  the length & breadth & print area of rectangle.

#include<stdio.h>

void getArea();
void main(){

    getArea();
}

void getArea(){
    float len,b,area;
    printf("Enter the length:");
    scanf("%f",&len);
    printf("Enter the bredth:");
    scanf("%f",&b);
    area = len*b;
    printf("The area is %.2f.",area);
}