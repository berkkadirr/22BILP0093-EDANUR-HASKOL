#include <stdio.h>

int main () {

    int yas = 0;


   printf("\n yas giriniz : ");
   scanf("%i",&yas);

  if( yas >= 1 && yas <= 4)
  printf("\n bebeklik");
  else if( yas > 4 && yas <= 14 )
  printf("\n ilkokul");
  else if( yas > 14 && yas <= 21 )
  printf("\n üniversite");
  else if( yas > 21 && yas <= 60 )
  printf("\n yetiskin");
  else if( yas > 60 )
  printf("\n emekli");

return 0;
	
 }
