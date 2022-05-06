//WAP to display the sum and average of nth number input by the users.

#include<stdio.h>
void main(){
        int j,i,add=0;
        printf("Enter a number: ");
        scanf("%d",&i);
        for(j=1; j<=i; j++){
            add = add+j;
        }
        printf("\nThe addition of %dth number is %d",i,add);
        printf("\nAnd the average is %d",add/i);
}