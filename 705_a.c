
//WAP that will examine each character in character type array and count how many ‘a’ characters are there.

#include<stdio.h>
void main(){
    int i,a;
    i=a=0;
    char c[20];
    printf("Enter a line:");
    scanf("%[^\n]",c);

    for(i=0; c[i]!='\0'; i++){
       if(c[i]=='a') a++;
    }
    printf("There are %d a's in array.",a);
}