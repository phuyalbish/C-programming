//WAP to enter a character and then determine whether it is a vowel or not. Using Switch case.

#include<stdio.h>
void main(){

    char ch;
    printf("Enter a letter:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is vowel letter.",ch);
        break;
        default:
        printf("%c is not a vowel letter.",ch);

    }
}