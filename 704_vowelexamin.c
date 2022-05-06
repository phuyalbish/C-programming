//WAP  that  will  examine  each  character  in  character  type  array  and  
//determine  how  many  vowels  and consonants are there

#include<stdio.h>
void main(){
    int i,v,c;
    i=v=c=0;
    char ch[20];
    printf("Enter a line:");
    scanf("%[^\n]",ch);

    for(i=0; ch[i]!='\0'; i++){
       if((ch[i]>='a' && ch[i]<='z')|| (ch[i]>='A' && ch[i]<='Z')) {
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || 
           ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' ) v++;
           else c++;

       }

    }
    printf("There are:\n%d vowels and\n%d consnants",v,c);
}