#include <stdio.h>

int main () {
char metin[100];
char temp;
 int uzunluk = 0;
    int m = 0,n = 0;
printf("bir metin giriniz \n: " );
gets(metin);
   for( m = 0 ; m < uzunluk - 1; m++ )
{
   for( n = m+1 ; n < uzunluk; n++ )
 {
 if( metin[m] > metin[n] )
 {
 temp = metin[m];
  metin[m] = metin[n];
    metin[n] = temp;
}
 }
   }
    printf("harflerinin siralamasi \n %s",metin);
	
return 0;
}
