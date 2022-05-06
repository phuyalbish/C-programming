//WAP to read the age of 10 person and count the number of person of age group 50 to 60.

#include<stdio.h>
void main(){

    int  i,age,flag=0;

    
        printf("Enter ten peoples age:\n");
    for(i=1; i<=10; i++){
        scanf("%d",&age);
        if(age>=50 && age<60){
            flag++;
        }
    }
    printf("There are %d number of people aged 50-60.",flag);
}