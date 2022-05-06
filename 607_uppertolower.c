//WAP to read a character and convert it into uppercase 
//if it is in lowercase and vice-versa using function with argument and return type.

#include<stdio.h>

char ltuutl(char);
void main(){
    char c;
    printf("Enter a character:");
    scanf(" %c",&c);
    printf("The translate of %c is %c",c,ltuutl(c));
}
char ltuutl(char x){
        if(x>64 && x<91) return x+32;
        else if(x>96 && x<123) return x-32;
        else return x;
}