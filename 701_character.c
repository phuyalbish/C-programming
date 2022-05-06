//WAP to take input a line, and then display it character wise.

#include<stdio.h>
void main(){

    int i=0;
    char c[20];
    printf("Enter a line:");
    scanf("%[^\n]",c);

    printf("The characters are:\n");

    for(i=0; c[i]!='\0'; i++){
        printf("%c\t",c[i]);
    }
}