#include <stdio.h>

int main () {
	
 char kelime[100];
  int uzunluk = 0;
 int n = 0;
int sayac = 0;
 char aranan;
char harf;
 printf("uzun cumle giriniz \n : " );
gets(kelime);
printf("cumle icinde aranacak harf \n: ");
 scanf("%c",&aranan);
 for( n= 0; n < uzunluk ; n++)
    {
harf = kelime[n];
if(  aranan == harf)
   sayac++;
    }
  printf("\n \"%s\" cumlesi icinde %c harfi %i tane geciyor.",kelime);
	
	return 0;
}
