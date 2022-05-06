//WAP  that  use  a  function  called  prime().  
//This  function  takes  a  number  as  an  argument and returns 0, if the given argument is prime otherwise 1

#include<stdio.h>

int prime(int);

void main(){

    int num;
    printf("Enter a numberto check it is prime or not:");           
    scanf("%d",&num);
    if(prime(num) == 0) printf("%d is a prime",num);
    else printf("%d is not a prime",num);
}

int prime(int num){

    int i,flag;
    for(i=2; i<num; i++){            


        if(num%i == 0){
            flag = 1;
            break;
        }
    }


    if(flag==0){
        return 0;
    }
    else{
        return 1;
    }
}