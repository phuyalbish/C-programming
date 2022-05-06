//Write a program that can declare a 1-Dimensional array of sizen.
//Now accept the content of that array and display theircontent.



#include<stdio.h>
void main(){
    int n;
    printf("Enter how many:");
    scanf("%d",&n);
    int A[n],i;
    printf("Enter %d numbers:",n);
    for(i=0; i<n; i++){
        scanf("%d",(A+i));
    }
    for(i=0; i<n; i++){
        printf("%d\t",*(A+i));
    }

}