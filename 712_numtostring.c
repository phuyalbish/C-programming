// WAP that will take an integer of four digit and display individual number in words.
#include<stdio.h>

void main(){

    int x,i=0;
    char a[4];
    printf("Enter a number:");
    scanf("%d",&x);

    while(x=0){

        a[i] = (x%10)+'0';
        i++;
        x/10;
    }
    for(i=0; a[i]!='\0'; i++){
        printf("%c\n",a[1]);
    }
}