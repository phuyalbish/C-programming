
//WAP that will examine each character in character type array and count how many words are there.
#include<stdio.h>
void main(){
    int i,a;
    i=a=0;
    char c[20];
    printf("Enter a line:");
    scanf("%[^\n]",c);

    for(i=0; c[i]!='\0'; i++){
       if(c[i]==' ') a++;
    }
    printf("There are %d words in array.",a+1);
}