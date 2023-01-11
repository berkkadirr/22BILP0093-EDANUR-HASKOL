#include <stdio.h>

int main () {
	
int gun = 0;
 
 printf("gunler \n");
 
 printf("gun numarasi girin \n: ");
 scanf("%i",&gun);
 
 if( gun == 1 )
  printf("\n pazartesi");
 else if( gun == 2 )
  printf("\n sali");
 else if( gun == 3 )
  printf("\n carsamba");
 else if( gun == 4 )
  printf("\n persembe");
 else if( gun == 5 )
  printf("\n cuma");
 else if( gun == 6 )
  printf("\n cumartesi");
 else if( gun == 7 )
  printf("\n pazar");

		return 0;
}
