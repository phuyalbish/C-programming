#include<stdio.h>
void main(){
    char choose;
    int res,n1,n2;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("MENU:\n\ta.Summation\n\tb.Sum of Squares\n\tc.Sum of Cubes\n\td.Products\n");
    scanf(" %c",&choose);

    switch(choose){
        case 'a':
            res = n1+n2;
            break;
        case 'b':
            res = (n1*n1)+(n2*n2);
            break;
        case 'c':
            res = (n1*n1*n1)+(n2*n2*n2);
            break;
        case 'd':
            res = n1*n2;
            break;
        default:
            printf("\nInvalid choice :choose a,b,c or d");

    }
    printf("\nThe result is %d",res);
}