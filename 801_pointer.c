#include<stdio.h>

void main(){
    int x=9;
    int *xptr=&x;
    int **xpptr=&xptr;
    printf("Content of x:%d\n",x);
    printf("Content of x:%d\n",*xptr);
    printf("Content of x:%d\n",*(*(xpptr)));
    printf("Address of x:%d\n",&x);
    printf("Address of x:%d\n",xptr);
    printf("Address of x:%d\n",*xpptr);
    printf("Content of xptr:%d\n",xptr);
    printf("Content of xptr:%d\n",*xpptr);
    printf("Address ofxptr:%d\n",&xptr);
    printf("Address of xptr:%d\n",xpptr);
    
    }
