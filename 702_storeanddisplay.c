//WAP that will enter a line of text, store it in a array and then display it backwards.

#include<stdio.h>
void main(){

    int i=0;
    char c[20];
    printf("Enter a line:");
    scanf("%[^\n]",c);

    printf("The characters are:\n");

    for(i=0; c[i]!='\0'; i++){}

    while(i>=0){
        printf("%c",c[i]);
        i--;
    }
}