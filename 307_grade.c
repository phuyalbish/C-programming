//WAP that asks the user to enter his/her marks of 5 subjects and print the corresponding grade using if else if.
//100 – 80 = A
//79– 60 = B
//59 – 50 = C
//49 – 40 = D
//< 40 = F

#include<stdio.h>
void main(){

    
	int prog,dccn,math,soc,com,tot;
	float p;
	printf("Enter your marks here:\nProgramming:\t");
	scanf("%d",&prog);
	printf("DCCN:\t");
	scanf("%d",&dccn);
	printf("Math:\t");
	scanf("%d",&math);
	printf("Sociology:\t");
	scanf("%d",&soc);
	printf("Communication:\t");
	scanf("%d",&com);

    
	if(prog>100 || dccn>100 || math>100 || soc>100 || com>100){
		printf("Some mark exceed 100.\n");
	}
	else{
		tot = prog+dccn+math+soc+com;
		p = (tot*100)/500;
        printf("The percentage is %.2f\n",p);

        if(p>=80 && p<=100)  printf("The grade is A");
        else if(p>=60 && p<=79) printf("The grade is B");
        else if(p>=50 && p<=59) printf("The grade is C");
        else if(p>=40 && p<=49) printf("The grade is D");
        else printf("The grade is F");
	}
}