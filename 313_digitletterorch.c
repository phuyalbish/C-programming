//WAP to read a character and check if it is alphabet, digit or special character.

#include<stdio.h>
void main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
        printf("%c is a alphabet.",ch);
    }
    else if(ch>=48 && ch<=57){
        printf("%c is a digit",ch);
    }
    else{
        printf("%c is a special character.",ch);
    }
}
