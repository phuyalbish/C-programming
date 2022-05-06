//Marksheet.
#include<stdio.h>
void main(){
	int prog,dccn,math,soc,com,tot;
	float per;
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
		printf("Some mark exceed 100.");
	}
	else{
		tot = prog+dccn+math+soc+com;
		per = (tot*100)/500;
		
		printf("\nYour marksheet appears here:");
		printf("\nSubject\t\tMarks");
		printf("\nProgramming:\t%d",prog);
		printf("\nDCCN:\t\t%d",dccn);
		printf("\nMath:\t\t%d",math);
		printf("\nSociology:\t%d",soc);
		printf("\nCommunication:\t%d",com);
		printf("\n\nThe total marks is:%d",tot);
		printf("\nPercentag: %.2f",per);
	}
}
