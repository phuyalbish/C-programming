//WAP to search the number inputted by user in an array.


#include<stdio.h>
void main(){

         int array[10]= {21,2,3,4,7,0,24,1,8,10},i,flag=0,search;
        printf("\n\nSearch the number:");
        scanf("%d",&search);

        for(i=0; i<10; i++){
            if(array[i] == search){
                flag = 1;
                break;
            }
        }
        if(flag==1){
            printf("%d is in the list.",search);
        }
        else{
            printf("%d is not in the list.",search);
        }


}