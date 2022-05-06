//Y = 1 + x +x 2 / 2 ! + x 3 /3! + x 4 /4!+...+x n /n!

#include<stdio.h>
void main(){
    int n,x,i,j;
    float ser,fact,pow;

    printf("Enter the 'x' of series:");
    scanf("%d",&x);
    printf("Enter the 'n':");
    scanf("%d",&n);

    printf("The series upto %dth term of x as %d are:\n1",n,x);
    for(i=1; i<=n; i++){
        pow = fact = 1;

        for(j=1; j<=i; j++){
            pow *=x;
            fact *=j;
        }
        ser = pow/fact;
        printf(" + %.3f",ser);
    }
    printf("\n\n\n");
}