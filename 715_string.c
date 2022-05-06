// WAP to perform the following operations on the strings using <string.h> header file.

// b.Concatenate the one string to another string.
// c.Copy the one string to another.
// d.Swap the two strings to each other.
// e.Compare the two strings.

#include<stdio.h>
#include<string.h>


void main(){

    char c[50],d[50],swap[50],e[50],f[50];
    printf("Enter a string");
    scanf(" %[^\n]",c);

    printf("\nThe length of string is %d",strlen(c));
    strcpy(d,c);
    printf("\nThe copied one %s",d);
    
    printf("\nEnter a string to swap:\n");
    scanf(" %[^\n]",e);

    printf("\nBefor swap:\nE=%s\nC=%s",e,c);
    strcpy(swap,c);
    strcpy(c,e);
    strcpy(e,swap);
    printf("\nBefor swap:\nE=%s\nC=%s",e,c);

    printf("\nEnter a string to swap:\n");
    scanf(" %[^\n]",f);

    if(strcmp(c,f) == 0) printf("Ther are equal");
    else printf("Ther are not equal");
}