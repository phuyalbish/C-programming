//WAP to find the number of and sum of all integers greater than 100 and less than 200 that are exactly divisible by 7 but not by 5.
#include<stdio.h>
void main(){
    int i,flag=0,sum=0;
    for(i=100; i<200; i++){
        if(i%7==0 && i%5!=0){
            sum+=i;
            flag++;
        }
    }
    printf("There are %d number divisible by 7 and 5.\nAnd the sum is %d",flag,sum);
}