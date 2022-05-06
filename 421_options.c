//WAP to take the options from the user for Save(S), Open(O), Exit (E) and print the corresponding message like” you want to open the file?” by using switch case.
#include<stdio.h>
void main(){
    char choose,yn;

    here:
    printf("Enter what you wanna do with the file?\nSave(S)\nOpen(O)\nExit (E)\n");
    scanf(" %c",&choose);

    switch(choose){
        case 'S':
            printf("\nSo you want to Save the file? (y/n)");
            scanf(" %c",&yn);
            break;
        case 'O':
            printf("\nSo you want to Open the file? (y/n)");
            scanf(" %c",&yn);
            break;
        case 'E':
            printf("\nSo you want to Exit the file? (y/n)");
            scanf(" %c",&yn);
            break;
        default:
            printf("\nInvalid choice :choose S,O or E.");

    }
    if(yn == 'Y' || yn == 'y'){
        printf("Thank you for your choice.");
    }
    else{
        goto here;
    }

}