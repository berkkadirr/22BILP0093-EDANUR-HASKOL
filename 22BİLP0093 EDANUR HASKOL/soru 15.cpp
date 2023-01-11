#include <stdio.h>


int main () {
	
 printf("\n Sesli harflerin kontrolu...");

 printf("\n Bir harf giriniz :");
 scanf("%c",&harf);
 
 if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O'  || harf == 'U' )
  printf("\n %c bir SESLI harftir.",harf);
 else
  printf("\n %c bir sesli harf DEGILDIR.",harf);
	
	
	
	return 0;
}
