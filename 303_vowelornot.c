//WAP to enter a character and then determine whether it is a vowel or not.

#include<stdio.h>
void main(){

    char ch;
    printf("Enter a letter:");
    scanf("%c",&ch);


if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
    if(ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85 || ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117 ){
            printf("%c is a vowel letter",ch);
    }
    else{
         printf("%c is a consonant letter",ch);
    }
}
else{
     printf("%c is not a letter",ch);
}
}