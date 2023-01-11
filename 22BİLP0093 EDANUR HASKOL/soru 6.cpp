#include <stdio.h>

int main (){
	
	float yaricap = 0;
	float alan = 0;
	float cevre = 0;
	
	printf ("\n dairenin alani ve cevresi");
	printf ("\n dairenin yari capi:");
	scanf ("%f,&yaricap");
	
	alan = 3.14 * yaricap * yaricap;
	cevre = 2 * 3.14 * yaricap;
	
	printf("\n dairenin alani :  %4f",alan);
	printf("\n dairenin cevresi : %4f",cevre);
		
	
	
	
	
	return 0;
}
