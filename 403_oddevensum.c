//WAP to find sum of odd numbers and even numbers from 1 to 100.
#include<stdio.h>
void main(){
    int i,odd=0,even=0;
    for(i=1; i<=100; i++)
    {
        if(i%2==0){
            even += i;
        }
        else{
            odd += i;
        }
        
    }
    printf("\nSum of odd is:%d",odd);
    printf("\nSum of even is:%d",even);
}