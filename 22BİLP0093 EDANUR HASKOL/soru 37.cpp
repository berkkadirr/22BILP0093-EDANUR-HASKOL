#include <stdio.h>

int main () {
	
int sayilar[10];
 int sayac = 0;
 int max = 0;
 int min = 0;
 
 printf("maximum ile minumum");

 for(sayac=0 ; sayac < 10; sayac++)
 {
  printf("%i. Sayi : ",sayac+1);
  scanf("%i",&sayilar[sayac]);
  if( sayac == 0 )
   min = sayilar[0];
 
  if( sayilar[sayac] > max )
   max = sayilar[sayac];
 
  if( sayilar[sayac] < min )
   min = sayilar[sayac];
 }
 printf("en buyuk sayi \n  : %i ",max);
 printf("\n en kucuk Sayi \n : %i ",min);
	
return 0;
}


