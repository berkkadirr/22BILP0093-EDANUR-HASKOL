#include <stdio.h>
 
int main () {

 int sayi = 0;
 int n = 0;
 char tek = 'E';

 printf(" bir sayi girin \n ");
 scanf("%i",&sayi);
 
 for(n=2;n<sayi;n++)
 {
  if( sayi % n == 0 )
  {
   tek = 'H';
   break;
  }
 }
 
 if( tek == 'E' )
  printf("%i sayisi asal \n",sayi);
 else
  printf("%i sayisi asal degil \n",sayi);
 
 return 0 ;
}
