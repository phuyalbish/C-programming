//WAP  that  will  examine  how  many  characters  are  letters,
//  how  many  are  digits,  how  many  are  white space characters in a line.


#include<stdio.h>
void main(){
    int i,n,a,space;
    i=n=a=space=0;
    char c[20];
    printf("Enter a line:");
    scanf("%[^\n]",c);

    for(i=0; c[i]!='\0'; i++){
       if(c[i]>='0' && c[i]<='9') n++;
       if(c[i]==' ')space++;
       if((c[i]>='a' && c[i]<='z')|| (c[i]>='A' && c[i]<='Z')) a++;
    }
    printf("There are:\n%d numbers.\n%d spaces and\n%d letters.",n,space,a);
}