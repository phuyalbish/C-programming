//WAP to display the squares of the integers from 1 to 100 except numbers divisible by 11.
#include<stdio.h>
void main(){
    int i,square;
    for(i=1; i<100; i++){
        if(i%11==0){
            continue;
        }
        else{
            printf("%d = %d\t",i,i*i);
        }

    }
}