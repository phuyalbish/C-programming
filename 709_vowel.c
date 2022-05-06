//WAP that will examine each character in character type
// array called text and print result by replacing all the vowels by “*” character.

#include<stdio.h>
void main(){
    int i=0;
    char c[20];
    printf("Enter a line:");
    scanf("%[^\n]",c);

    for(i=0; c[i]!='\0'; i++){
       if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'
        ||c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U'){
           c[i]='*';
        }
    }

    for(i=0; c[i]!='\0'; i++){
        printf("%c",c[i]);
    }

}