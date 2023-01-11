#include <stdio.h>

int main () {

void asalsayi(int);
int sayi = 0;
printf("bir sayi giriniz \n  ");
scanf("%i",&sayi);

asalsayi(sayi);
}
 
asalsayi(int say)
{
    int n  = 0;
    char prime = 'E';
 for(n=2;n<say;n++)
{
 if( say % n == 0 )
    {
    prime = 'H';
   break;
 }
   }
 if( prime == 'E' )
  printf("%i bir asal sayidir \n ",say);
else
   printf("%i bir asal sayi degildir \n ",say);
	
	return 0;
}

