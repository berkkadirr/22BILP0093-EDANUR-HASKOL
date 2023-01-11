#include <stdio.h>

int main () {
	
int sayi = 0;
 int n = 0;
 
 printf("carpim tablosu \n ");
 
 printf("\n sayi girin: ");
 scanf("%i",&sayi);

 printf("\n\n %i sayisi\n\n",sayi);
 
 for(n=1;n<=10;n++)
 {
  printf("\n %i * %i = %i",sayi,n,(sayi*n) );
 }
 
	return 0;
}
