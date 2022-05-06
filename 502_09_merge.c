
#include<stdio.h>
void main(){

    int a[4] = {1,2,3,5};
    int b[3] = {3,4,1};
    int c[7];
    int i,n=0;
    
    for(i=0; i<4; i++){
            c[i] = a[i];
            n++;
    }
    
    for(i=0; i<3; i++){
            c[n] = b[i];
            n++;
    }


    for(i=0; i<n; i++){
            printf("\n%d",c[i]);
    }
    
}