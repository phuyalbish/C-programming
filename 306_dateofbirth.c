#include<stdio.h>
void main(){

   //Tree loops

      int dd,dm,dy,cd,cm,cy,y,m,d;
      printf("Enter the current date:\nYear:");
      scanf("%d",&cy);
      printf("Month:");
      scanf("%d",&cm);
      printf("Day:");
      scanf("%d",&cd);

      printf("\nEnter the Your date of birth:\nYear:");
      scanf("%d",&dy);
      printf("Month:");
      scanf("%d",&dm);
      printf("Day:");
      scanf("%d",&dd);
      y = cy-dy;
      m = cm-dm;
      d = cd-dd;


      if(d<0){
         d = d+30;
         m--;
      }
      if(m<0){
         m = m+12;
         y--;
      }
      if(y<0){
         printf("Wrong input");
      }
      else{
      printf("Your age is %dyr %dmonth %dday",y,m,d);

      }
}