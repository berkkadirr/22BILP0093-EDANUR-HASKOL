#include <stdio.h>

int main () {
	
	int sayi1=0;
	int sayi2=0;
	int toplam=0;
	
	printf("\n iki Sayi Giriniz");
	printf("\n birinci sayi");
	scanf("%i",sayi1);
	printf("\n ikinci sayi");
	scanf("%i",sayi2);
	
	toplam = sayi1+sayi2;
	printf("\n\n%d + %d = %d",sayi1,sayi2,toplam);
	
	return 0;
}
