//WAP to determine the whether the given word is palindrome or not.


#include<stdio.h>
void main(){

    int i=0;
    int count=0;
    char c[20],d[20];
    printf("Enter a line:");
    scanf(" %[^\n]",c);

    printf("The characters are:\n");

    // for(i=0; c[i]!='\0'; i++){
    //     count++;
    // }
    for(i; i>=0; i--){
        d[count] = c[i];
        count++;
    }
    for(i=0; c[i]!='\0'; i++){
        printf("%d",d[i]);
    }
}