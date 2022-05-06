//WAP to read a number and check whether it is prime or not.
#include<stdio.h>
void main(){
    int i,num,flag=0;
    printf("Enter a numberto check it is prime or not:");           
    scanf("%d",&num);

    for(i=2; i<num; i++){            


        if(num%i == 0){
            flag = 1;
            break;
        }
    }


    if(flag==0){
        printf("%d is  Prime.",num);
    }
    else{
        printf("%d is  not Prime.",num);
    }
}