//WAP to enter any character. If the entered character is in lower case then convert it into upper case and if it is a lower case character then convert it into upper case.

#include<stdio.h>
void main(){
    char ch;
    printf("Enter a character.");
    scanf("%c",&ch);

if(ch>=65 && ch<=90){
    printf("%c = %c",ch,ch+32);
}
else if(ch>=97 && ch<=122){
    printf("%c = %c",ch,ch-32);
}
else{
    printf("Not a letter.");
}
}