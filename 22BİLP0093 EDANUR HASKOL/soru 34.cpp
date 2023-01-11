#include <stdio.h>

int main () {
int sayi = 0;
int no = 0;
int rakam = 0;
long int toplam = 0;
 
 printf("sayi giriniz \n: ") ;
 scanf("%i",&sayi);
 
 no = sayi;
 
 while( no > 0 )
 {
  rakam = no%10;
  toplam = toplam + (rakam,3);
  no = no/10;
 }
 
 if( toplam == sayi )
  printf(" %i sayisi mukemmel sayi. \n",sayi);
 else
  printf(" %i sayisi mukemmel sayi degil. \n",sayi);
 
	return 0;
}


