//WAP  that  will  examine  each  character  in  character  type  array  called  text  and  
//print  out  the  result  by converting the lowercase letter to uppercase and vice versa.

#include<stdio.h>
void main(){
    int i=0;
    char c[20];
    printf("Enter a line:");
    scanf("%[^\n]",c);

    for(i=0; c[i]!='\0'; i++){
       if(c[i]>='a' && c[i]<='z') c[i] -= 32;
       else if(c[i]>='A' && c[i]<='Z') c[i] += 32;
       else;
        
    }

    for(i=0; c[i]!='\0'; i++){
        printf("%c",c[i]);
    }

}
