//WAP that will ask to input a sentence and print the result by replacing the appearance of “an” word with “##”.
#include<stdio.h>
void main(){
    int i=0;
    char c[20];
    printf("Enter a line:");
    scanf("%[^\n]",c);

    for(i=0; c[i]!='\0'; i++){
       if((c[i-1]==' ' || i==0) && c[i]=='a' && c[i+1]=='n' && (c[i+2]==' ' || c[i+2]=='\0')){
           c[i]='#';
           c[i+1]='#';
        }
    }

    for(i=0; c[i]!='\0'; i++){
        printf("%c",c[i]);
    }

}