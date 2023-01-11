#include<stdio.h>
int main(){
	
int sayi1,sayi2,toplam,cikar,carpim,kalan;
float bolme,ortalama;

printf("Ilk Sayiyi Giriniz :");
scanf("%d",&sayi1);

printf("Ikinci Sayiyi Giriniz :");
scanf("%d",&sayi2);
	
toplam=sayi1+sayi2;
printf("Toplam: %d \n",toplam);

cikar=sayi1-sayi2;
printf("Farki: %d \n",cikar);

carpim=sayi1*sayi2;
printf("Carpimi : %d \n",carpim);

bolme=(float)sayi1/(float)sayi2;
printf("Bolumu : %f \n",bolme);	

printf("Sayi 1 :");
scanf("%d",&sayi1);
printf("Sayi 2 :");
scanf("%d",&sayi2);

ortalama=(float)(sayi1+sayi2)/2;
printf("%d ve %d sayilarinin ortalamasi : %f",sayi1,sayi2,ortalama);
		
	
	return 0;
}
