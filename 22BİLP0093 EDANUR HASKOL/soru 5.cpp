#include <stdio.h>

int main () {
	
	int kenar1,kenar2;
	float karesi,cevresi;
	
	
	printf ("birinci kenar degerini giriniz (m): ");
	scanf("%d",&kenar1);
	
	printf("ikinci kenar degerini giriniz (m): ");
	scanf("%d,&kenar2");
	
	karesi = float(kenar1) * float(kenar2);
	cevresi = 2 * (float(kenar1) + float(kenar2));
	
	printf ("\n\n Dikdortgenin alani  %.0f mi ve cevresi  %.0f m.",karesi,cevresi);
	
	
	
	return 0;
}

