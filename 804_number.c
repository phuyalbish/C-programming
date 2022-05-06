//Write a program which takes an input from user and then checks whether it is a number or a character.


#include<stdio.h>

void main(){
    int i;
    char n,*c;
    printf("Enter a line:");
    scanf("%c",&n);
    c = &n;
       if(*c>='0' && *c<='9') printf("Its a number");
       if((*c>='a' && *c<='z')|| (*c>='A' && *c<='Z'))  printf("Its a character");
}