//WAP  that  accepts a  sentence  of  words  and  counts  number  of  words  
//that  a  sentence  has  then  display each words of the sentence in different lines.

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
    printf("There are %d words in array:\n",a+1);

    for(i=0; c[i]!='\0'; i++){
        printf("%c",c[i]);
        if(c[i]==' ') printf("\n");
    }
}