//WAP  that  takes  a  string  from  the  user  and  convert  the  string  into
//  uppercase  if  the  first  character  is lowercase and vice versa.

#include<stdio.h>
void main(){
    int i=0;
    char c[20];
    printf("Enter a line:");
    scanf("%[^\n]",c);

    if(c[0]>='a' && c[0]<='z'){
        for(i=0; c[i]!='\0'; i++){
            if(c[i]>='a' && c[i]<='z') c[i] -= 32;
        }
        
    }
    else if(c[0]>='a' && c[0]<='z'){
            for(i=0; c[i]!='\0'; i++){
                if(c[i]>='A' && c[i]<='Z') c[i] += 32;
                
            }
            
        }
    else;
    for(i=0; c[i]!='\0'; i++){
        printf("%c",c[i]);
    }

}
