#include <stdio.h>


int main () {
	
	float mesafe=0;
	int zaman=0;
	float hiz= 0;
	
	printf("\n gidilecek mesafe (m):");
	scanf("%f",mesafe);
	
	printf("\n varis zamani (sn):");
	scanf("%i",zaman);
	
	hiz = (float) mesafe/zaman;
	
	printf("\n hiziniz : %2f m/s ",hiz);
	
	
	
	return 0;
}
