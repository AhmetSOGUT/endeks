#include <stdio.h>

int main(){

float kilo,boy,endeks;

printf("Kilonuzu ve boyunuzu giriniz(metre ve kg cinsinden)\n\n");

printf("Kilonuz =");

scanf("%f",&kilo);
printf("\n");
printf("Boyunuz = ");
scanf("%f",&boy);
printf("\n");
endeks=kilo/(boy*boy);

 printf("Endeksiniz = %.2f \n",endeks);

 if(endeks< 18.5){

    printf("Dusuk kilolu");
 }

    else if(endeks<24.99){

        printf("Normal kilo");
   }
    else if (endeks<29.99){
    printf("Fazlaa kilo");

    }
  else   
   printf("OBEZZ!!!"); 



return 0;
}