#include <stdio.h>

int main () {
	int sayi = 0;
 int rakam = 0;
 int toplam = 0;
 
 printf("sayi giriniz \n: ");
 scanf("%i",&sayi);
 
 while( sayi>0 )
 {
  rakam = sayi%10;
  toplam = toplam + rakam;
  sayi = sayi/10;
 }
 
 printf("sayidaki rakamlarin toplami %i \n",toplam);
	
	
	return 0;
}
