#include<stdio.h>
int main(){
	float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
	
	printf("\n Hesap Makinesi");
	
	printf("\n 1.sayi :");
	scanf("%f",&sayi1);

	printf("\n 2.sayi :");
	scanf("%f",&sayi2);
	 fflush(stdin);
 
	printf("\n Islem :(+ - * /)");
	scanf("%c",&islem);

	switch(islem){
    case'+':sonuc=sayi1+sayi2;break;
		
	case'-':sonuc=sayi1-sayi2;break;
		
	case'*':sonuc=sayi1*sayi2;break;
	case'/':sonuc=sayi1/sayi2;break;

	}
	
	printf("\n%.2f%d%.2f=%.3f",sayi1,islem,sayi2,sonuc);
	

	return 0;
}
