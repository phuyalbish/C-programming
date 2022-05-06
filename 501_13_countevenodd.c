//WAP to take 1-dimensional array of n size and count the even and odd number in the array and display.//Write a program in C to separate odd and even integers in separate arrays


#include<stdio.h>
void main(){

    int i,sum=0,swap,search,flag1=0,flag2=0;
    int a[10]= {21,2,3,4,7,0,24,1,8,10};
   for(i=0; i<10; i++){
        if(a[i]%2==0){
            flag1++;
        }
        else if(a[i]%2==1){
            flag2++;
        }
    }

    printf("%d even numbers.\n",flag1);
    printf("%d odd numbers.\n",flag2);
}