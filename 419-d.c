// #include<stdio.h>

// void main(){

//     int i=5;
//     while(i>=1){
//         int j=1;
//         while(j<=i){
//             printf("%d",j);
//                 j++;
//         }
//         printf("\n");
//         i--;

//     }
// }




#include<stdio.h>
void main(){


int i,j;

for(i=5; i>=1; i--){
    for(j=1; j<=i; j++){
        printf("%d",i);

    }
    printf("\n");


}

}