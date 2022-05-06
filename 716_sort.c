

//WAP to sort a list of strings alphabetically using a two-dimensional character array

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main(){
            int c[5][50],swap[50];
            int i,j;
            printf("Enter list of strings to sort.");
            for(i=0; i<5; i++){
                gets(c[i]);
            }
            for(i=0; i<5; i++){
                    for(j=i+1; j<5; j++){
                            if(strcmp(c[i],c[j]) > 0){
                                strcpy(swap,c[i]);
                                strcpy(c[i],c[j]);
                                strcpy(c[j],swap);
                            }
                    }

            }
            printf("The sorted string are:\n");
            for(i=0; i<5; i++){
                puts(c[i]);
            }
    }