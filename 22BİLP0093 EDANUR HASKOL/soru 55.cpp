#include <stdio.h>

int main () {
	
	char metin[100];
char ters[100];
int uzunluk = 0;
int n = 0;
printf("bir metin giriniz \n: " );
gets(metin);
 for( n = 0 ; n < uzunluk; n++ )
    {
ters[n] = metin[uzunluk-1-n];
    }
 ters[n] = '\0';
 printf("girilen metin \n: %s",metin);
    printf("metnin tersi \n  : %s",ters);

	return 0;
}
