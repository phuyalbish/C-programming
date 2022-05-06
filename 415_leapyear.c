
//WAP to find the leap year between 1900 to 2000.
#include<stdio.h>

void main(){
        int year;


        for(year=1900; year<=2000; year++){
                
        if(year%4 == 0)
        {
                if(year%100 == 0){
                    if(year%400 == 0) printf("\n%d",year);
                    else;
                }
                else printf("\t%d",year);
        }
        else;


        }
}
